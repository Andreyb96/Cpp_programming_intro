#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a, b, c, s, p;
	cin >> a;
	cin >> b;
	cin >> c;
	p = (a + b + c) / 2;
	s = sqrt(p*(p - a)*(p - b)*(p - c));
	cout << s;
	return 0;
}