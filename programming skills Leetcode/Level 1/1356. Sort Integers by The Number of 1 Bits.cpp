//my solution for non repeated numbers
vector<int> sortByBits(vector<int>& arr) {
	int rep = 1;
	for (int i = 0; i < arr.size()-1; i++) {
		if (arr[i] == arr[i + 1])
			rep++;
	}
	if (rep == arr.size())
		return arr;
	map<int, int> m;
	int num = 0;
	for (int i = 0; i < arr.size(); i++) {
		int temp = arr[i];
		while (temp > 0) {
			if (temp % 2 == 1)
				num++;
			temp /= 2;
		}
		m[arr[i]] = num;
		num = 0;
	}

	vector<int> res;
	auto it = m.begin();
	while  (!m.empty()) {
		int min = 10001;
		auto choose=m.begin();
		for (auto it2 = m.begin(); it2 != m.end(); it2++) {
			if (it2->second < min) {
				min = it2->second;
				choose = it2;
			}
		}
		res.push_back(choose->first);
		m.erase(choose);
		min = 10001;
		it = m.begin();
	}

	return res;


}
//better  solution
class Solution {
public:
    int count_set_bit(int x){
        int bits = 0;
        while(x != 0){
            bits += x&1;
            x >>= 1;
        }
        return bits;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> sorted;
        for(int e : arr){
            //first sort by set bit count and then by itself
            //* 100000 because the max of arr is 10000
            sorted.push_back(count_set_bit(e) * 100000 + e);
        }
        sort(sorted.begin(), sorted.end());
        for(int i = 0; i < sorted.size(); i++){
            sorted[i] = sorted[i]%100000;
        }
        
        return sorted;
    }
};
