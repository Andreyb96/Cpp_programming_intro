#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int n, i;
	cin >> n;
	i = 0;
	while (pow(2,i) <= n) {
		cout << pow(2, i) << " ";
		i += 1;
	}
	return 0;
}