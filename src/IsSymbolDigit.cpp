#include <iostream>
#include <string>

using namespace std;

int main()
{
	char c;
	cin >> c;
	(c >= '0' and c <= '9') ? cout << "yes" : cout << "no";

	return 0;
}