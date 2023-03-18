class Solution {
public:
    string addBinary(string s1, string s2) {
        int n = s1.length();   
        int m = s2.length();
        
        int i= n-1;
        int j = m-1;
        int carry = 0;
        string  s = "";
        while(i>=0 || j>=0 || carry)
        {
            int a,b;
            if(i>=0)
            {
                a = s1[i]-'0';
                i--;
            }
            else{
                a = 0;
            }
            
            if(j>=0)
            {
                b = s2[j]-'0';
                j--;
            }
            else{
                b = 0;
            }
            
            int sum = a+b+carry;
            s += (sum%2)+'0';
            carry = (sum/2);
        }
        reverse(s.begin(), s.end());
        return s;
        
    }
};






//slower solution 
class Solution {
public:
   int from_b_to_d(string a) {
	int base = 1;
	int res = 0;
	for (int i = a.size() - 1; i >= 0; i--) {
		int no = int(a[i])-48;
			res+=no* base;
		base *= 2;
	}
	return res;
}
string from_d_to_b(int a) {
	string res = "";
	stack<int> temp;
	while (a) {
		temp.push(a % 2);
		a /= 2;
	}
	while (!temp.empty()) {
		res += (char) (temp.top()+48);
		temp.pop();
	}
	return res;

}

string addBinary(string a, string b) {
	if(a=="0" && b=="0")
		return a;
	int num1 = from_b_to_d(a);
	int num2 = from_b_to_d(b);
	int res = num1 + num2;
	return from_d_to_b(res);
	
}
};
