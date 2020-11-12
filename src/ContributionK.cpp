#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double p, x, y, k, i, sum;
	cin >> p;
	cin >> x;
	cin >> y;
	cin >> k;
	sum = x + 0.01 * y;
	i = 0;
	while(i < k) {
		sum = sum * (1 + p / 100);
		sum = trunc(sum*100)/100;
		i++;
	}
	cout << trunc(sum) << " " << trunc(sum * 100 - trunc(sum) * 100);
	return 0;
}