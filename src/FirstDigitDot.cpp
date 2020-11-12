#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x;
	cin >> x;
	cout << int(trunc(x*10)) % 10;
	return 0;
}