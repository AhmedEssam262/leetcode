#include<iostream>
#include<string>
#include<unordered_set>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

	unordered_map<string, int> num = { {"BMW",2024},{"Honda",2022},{"Toyota",2018} };
	num.insert_or_assign( "BMW", 2022 );
	num.insert({ "BMW", 2023 });
	cout << num["BMW"];


/*

unordered_map<string, int> num = { {"BMW",2024},{"Hyundai",2001 }, {"Honda",2022},{"Toyota",2018},{"Kia",2010},{"128",2009} };

	int size = num.bucket_count();

	for (int i = 0; i < size; i++) {
		cout << "bucket #" << i << " contains :";
		for (auto it = num.begin(i); it != num.end(i); it++) {
			cout << "[" << it->first << "," << it->second << "]" << endl;
		}
		cout << endl;
	}
  rehash(10);
*/


}
