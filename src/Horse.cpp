#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << ((abs(a - c) == 1 && abs(b - d) == 2) || (abs(a - c) == 2 && abs(b - d) == 1) ? "YES" : "NO");
	return 0;
}