#include <iostream>
using namespace std;

int main() {
	int v,t,s;
	cin >> v >> t;
	s = 109;
	cout << (s*1000 + v*t)%s;
	return 0;
}