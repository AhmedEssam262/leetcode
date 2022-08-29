#include<iostream>
#include<string>
#include<map>

using namespace std;

int main() {
	map<int, string> m1 = { {1808787,"Ahmed Essam"},{211,"Nada Essam"},{212,"Rana Essam"} };

	cout << m1[1808787]<<endl;
	m1[1] = "mostafa";
	m1.insert({ 120, "hi" });
	cout << "----------------------------------------------------------------------" << endl;
	
	for (auto i : m1) {
		cout << "Your id is: " << i.first << ", and my name is: " << i.second << endl;
	}
	cout << "----------------------------------------------------------------------" << endl;
	/*
	----------------------------------------------------------------------Key Compare----------------------------------------------------------------------
	*/
	
	map<char, int> m1 = { {'a',98},{'b',70},{'d',60},{'h',23},{'z',40},{'r',25} };
	map<char, int>::key_compare com = m1.key_comp();
	auto it = m1.begin();
	char c = 'c';

	for (; com(it->first, c); it++) {
		cout << it->first << "," << it->second << endl;
	}
	
	/*
	-------------------------------------------------------------------------Frequency-------------------------------------------------------------------------
	*/
	
	int arr[] = { 1,-1,-2,-2,-2,-3,2,3,5,2,3,5,2,5,6,3,7,5,2,6,7,1 };
	map<int, int> m2;

	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
		m2[arr[i]]++;

	}

	for (auto ii : m2) {
		cout << "no:  " << ii.first << ", is repeated : " << ii.second << endl;
	}
	cout << "----------------------------------------------------------------------" << endl;


}
