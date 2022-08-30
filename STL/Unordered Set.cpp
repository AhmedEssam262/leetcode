#include<iostream>
#include<string>
#include<unordered_set>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

	unordered_set<string> s = { "sut","sun","mon","tues","wed","thu","fri" };

	cout << s.bucket_count() << endl;
	cout << "--------------------------------------------------------" << endl;
	for (auto it :s){
		cout << it << " is bucket in : #" << s.bucket(it) << endl;
	}

	cout << "--------------------------------------------------------" << endl;
for (int i = 0; i < size; i++) {
		cout << "Bucket #" << i << "contains: ";
		auto it = s.begin(i);
		for (; it != s.end(i); it++) {
			cout << *it << endl;
		}
		cout << endl;
	}



}
