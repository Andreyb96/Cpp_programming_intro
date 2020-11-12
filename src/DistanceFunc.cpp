#include <iostream>
#include <cmath>

using namespace std;

float distance(float a, float b, float c, float d) {
	float result;
	result = sqrt(pow((c-a), 2) + pow((d-b), 2));
	return result;
}

int main()
{
	float a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << distance(a,b,c,d);
	return 0;
}