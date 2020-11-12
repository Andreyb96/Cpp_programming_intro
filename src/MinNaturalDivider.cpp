#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int n, i;
	cin >> n;
	i = 1;
	while (i <= n) {
		i += 1;
		if (n%i == 0) {
			cout << i;
			break;
		}	
	}
	return 0;
}