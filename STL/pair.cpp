#include<iostream>
#include<utility>
#include<string>
#include<vector>

using namespace std;
int main() {

	pair<string, int> x;

	x.first = "Ahmed Essam";
	x.second = 22;
	x = { "ahmed",25 };

	vector<pair<int, int>> v;
	v.push_back({ 10, 1808787 });
	cout << v.front().first;
	//sort(mp.begin(), mp.end());

}
