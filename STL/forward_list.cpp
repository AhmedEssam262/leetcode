#include<iostream>
#include<algorithm>
#include<forward_list>
using namespace std;

bool rem(int x) {
	return x % 2 == 0;
}
int main() {
	forward_list<int> l = { 1,3,4,5,6 };
	auto it = l.before_begin();
	
	l.insert_after(it, { 10,20,30,40 });
	//l.erase_after(it);

	for (int i : l) {
		cout << i << endl;
	}
  
  
  
  forward_list<int> m = { 1,3,4,5,6 };
	forward_list<int> n = { 10,30,40,50,60 };
	auto it = m.before_begin();
	
	n.splice_after(n.before_begin(), m);

	/* ------------------------------------------------------------------to add at the end------------------------------------------------------------------
	it = next(it, 5);
	n.splice_after(it, m)
	*/
	for (int i : n) {
		cout << i << endl;
	}
}
