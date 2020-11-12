#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double p, x, y, sum;
	cin >> p;
	cin >> x;
	cin >> y;
	sum = x + 0.01 * y;
	sum = sum * (1 + p/100);
	cout << trunc(sum) << " " << trunc(sum*100 - trunc(sum)*100);
	return 0;
}