#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> v1 = { 1,2,3,4,5 };
  // Vector constructor
	vector<int> v(v1);
  vector<int> v(5,100);                   // a vector with size=5 and value=100 
/*
--------------------------------------------------------------------------Iterator--------------------------------------------------------------------------
*/
	
vector<int>::reverse_iterator it;
	it = v.rbegin();
	for (; it != v.rend(); it++) {
		cout << *it << endl;
	}	
	vector<int>::iterator it;
	it = v.begin();

	for (; it != v.end(); it++) {
		cout << *it << endl;
	}
	// there is also crbegin so we will use auto
	auto it=v.rbegin();
/*
--------------------------------------------------------------------------functions--------------------------------------------------------------------------
*/
// erase.insert : take pointer
	v.insert(v.begin()+3, 100);
	v.erase(v.begin()+3);
//resize
	v.resize(4);
	v.shrink_to_fit();

}
//minmax
auto p = minmax_element(v.begin(),v.end()-1);
	cout << *p.first << "," << *p.second;
