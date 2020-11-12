#include <iostream>

using namespace std;

bool isPointInSquare(double x, double y) 
{
	if (y >= -x-1 & y <= -x + 1 & y <= x + 1 & y >= x - 1)
	{
		return true;
	} else
	{
		return false;
	}
}

int main()
{
	double x;
	double y;
	cin >> x >> y;
	(isPointInSquare(x, y)) ? (cout << "YES"): (cout << "NO");
	return 0;
}