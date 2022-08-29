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

}
