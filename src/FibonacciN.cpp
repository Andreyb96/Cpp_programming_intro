#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int n, f1, f2, i, tmp;
	cin >> n;
	i = 3;
	f1 = 1;
	f2 = 1;
	while (i <= n) {
		tmp = f1 + f2;
		f1 = f2;
		f2 = tmp;
		i += 1;
	}
	cout << f2;
	return 0;
}