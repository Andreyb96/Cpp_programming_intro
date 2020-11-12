#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int n, max,i;
	i = 0;
	n = 1;
	max = -1000;
	while (n != 0) {
		cin >> n;
		if (max < n) {
			max = n;
			i = 1;
		}
		else if (max == n) {
			i += 1;
		}
	}
	cout << i;
	return 0;
}