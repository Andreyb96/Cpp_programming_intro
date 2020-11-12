#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if ((a ==c && abs(b - d) == 1) || (b == d && abs(a - c) == 1) || (abs(b - d) == 1 && abs(a - c) == 1)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}