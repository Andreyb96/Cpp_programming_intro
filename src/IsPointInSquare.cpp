#include <iostream>

using namespace std;

bool isPointInSquare(float x, float y) {
	bool flag;
	flag = true;
	if (x <= 1 and y <= 1 and x >= -1 and y >= -1) {
		flag = true;
	}
	else {
		flag = false;
	}
	return flag;
}

int main()
{
	float x, y;
	cin >> x >> y;
	(isPointInSquare(x, y)) ? cout << "YES" : cout << "NO";
	return 0;
}