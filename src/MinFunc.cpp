#include <iostream>

using namespace std;

int min(int a, int b) {
	int min;
	(a > b) ? min = b : min = a;
	return min;
}

int min4(int a, int b, int c, int d) {
	int minim;
	(min(a,b) > min(c,d)) ? minim = min(c, d) : minim = min(a, b);
	return minim;
}

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << min4(a,b,c,d);
	return 0;
}