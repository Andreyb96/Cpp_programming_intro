#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int n, i;
	cin >> n;
	i = 1;
	while (pow(i, 2) <= n) {
		cout << pow(i, 2) << " ";
		i += 1;
	}
	return 0;
}