#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int n, sum;
	n = 1;
	sum = 0;
	while (n != 0) {
		cin >> n;
		sum += n;
	}
	cout << sum;
	return 0;
}