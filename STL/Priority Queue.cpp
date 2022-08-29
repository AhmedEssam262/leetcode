#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main() {
	priority_queue<int> p;
	p.push(40);
	p.push(50);
	p.push(10);
	p.push(100);
	p.push(20);
	p.push(60);
	while (!p.empty())
	{
		cout << p.top() << endl;
		p.pop();
	}
}
