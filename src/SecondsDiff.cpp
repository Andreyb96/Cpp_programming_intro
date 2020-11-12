#include <iostream>
using namespace std;

int main() {
	int n1,n2,n3,m1,m2,m3;
	cin >> n1 >> n2 >> n3 >> m1 >> m2 >> m3;
	cout << (m1 - n1)*3600 + (m2-n2)*60 + (m3-n3);
	return 0;
}