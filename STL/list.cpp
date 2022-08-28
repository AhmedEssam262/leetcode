#include<iostream>
#include<algorithm>
#include<list>

using namespace std;
bool rem(int x) {
	return x % 2 == 0;
}
int main() {
	list<int> l = { 1,2,2,2,2,2,3,4,5,6 };

	 l.unique();
	 auto it = l.begin();
	 auto it2 = l.end();
	 it++;
	 it++;
	 it2--;
	 it2--;
	 l.erase(it, it2);
	// remove according to the function
  l.remove_if(rem);

	 for (int i : l) {
		 cout << i << endl;
	 }
}
