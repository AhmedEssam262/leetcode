//This is my solution
class Solution {
public:
    int find_most_repeated(vector<int> v) {
        int max = 0;
        int alloc;
        int index=0;
        for (int j = 0; j < v.size(); j++) {
            if (v[j] > max) {
                max = v[j];
                index = j;
            }
        }
        return index;
    }   
    vector<int> remove_most_repeated(vector<int> v2,int alloc) {
        
        for (int i = 0; i < v2.size(); i++) {
            if (v2[i] == alloc) {
                v2.erase(std::remove(v2.begin(), v2.end(), alloc), v2.end());
            }
        }
        return v2;
    }
    
    
    int minSetSize(vector<int>& arr) {
        	sort(arr.begin(), arr.end());

	int my_size = arr.size();
	int new_size = arr.size();
	vector<int> key;
	vector<int>repeat;
	vector<int>output;
	int r;
	int max = 0;
	int alloc;
	int index;
	int result=0;
	//
	r = 0;
	key.push_back(arr[0]);
	repeat.push_back(1);
	for (int i = 1; i < arr.size(); i++) {
		if (arr[i] == key.back()) {
			repeat[r]++;
		}
		else {
			r++;
			key.push_back(arr[i]);
			repeat.push_back(1);
		}
	}
	while (new_size > my_size / 2) {
		
		// for loop to find the most repeated
        int found=find_most_repeated(repeat);

        alloc = key[found];
		output.push_back(alloc);
		result++;
		arr = remove_most_repeated(arr, alloc);
		
		new_size = arr.size();
		repeat[found] = 0;

	}
        return result;
    }
};

//Better solution
class Solution {
public:
    int find_most_repeated(vector<int> v) {
        int max = 0;
        int alloc;
        int index=0;
        for (int j = 0; j < v.size(); j++) {
            if (v[j] > max) {
                max = v[j];
                index = j;
            }
        }
        return index;
    }   
    vector<int> remove_most_repeated(vector<int> v2,int alloc) {
        
        for (int i = 0; i < v2.size(); i++) {
            if (v2[i] == alloc) {
                v2.erase(std::remove(v2.begin(), v2.end(), alloc), v2.end());
            }
        }
        return v2;
    }
    
    
    int minSetSize(vector<int>& arr) {
     unordered_map <int, int> m;
      int n = arr.size();
      for(int i = 0; i < n; i++){
         m[arr[i]]++;
      }
      vector <int> temp;
      unordered_map <int, int> :: iterator it = m.begin();
      int sz = n;
      int ret = 0;
      while(it != m.end()){
         temp.push_back(it->second);
         it++;
      }
      sort(temp.rbegin(), temp.rend());
      for(int i = 0; i < temp.size(); i++){
         if(sz <= n / 2)break;
         ret++;
         sz -= temp[i];
      }
      return ret;
    }
};
