#include<iostream>
#include<string>
#include<set>

using namespace std;

int main() {

	set<int> s = {20,30,10,5,15,45,25,60,50};
	auto s_it = s.find(10);
	//auto s_it = s.lower_bound(10);
	auto e_it = s.find(25);
	//auto e_it = s.upper_bound(25);
	s.erase(s_it, e_it);

	for (auto i : s) {
		cout << i << endl;
	}
	cout << "----------------------------------------------------------------------" << endl;
	int c = 30;
	auto com = s.key_comp();
	for (auto itt = s.begin(); com(*itt, c); itt++) {
		cout << *itt << endl;
	}
}
