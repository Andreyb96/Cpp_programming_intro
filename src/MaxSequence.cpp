#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int n, max;
	n = 1;
	max = -1000;
	while (n != 0) {
		cin >> n;
		if (max < n) {
			max = n;
		}
	}
	cout << max;
	return 0;
}