#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int n, i;
	n = 1;
	i = 0;
	while (n != 0) {
		cin >> n;
		i += 1;
	}
	cout << i-1;
	return 0;
}