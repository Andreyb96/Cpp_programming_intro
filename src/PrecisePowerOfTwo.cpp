#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int n, i;
	cin >> n;
	i = 0;
	while (i <= 100) {
		if (pow(2, i) == n) {
			cout <<"YES";
			break;
		}
		i += 1;
		if (i == 100) {
			cout << "NO";
		}
	}
	return 0;
}