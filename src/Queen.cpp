#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << ((abs(a - c) == abs(b - d) || (a == c) || (b == d)) ? "YES" : "NO");
	return 0;
}