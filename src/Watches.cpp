#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	cout << n / 3600%24 << ':' << n / 600 % 6 << n % 3600 / 60 % 10 << ':' << n / 10 % 6 << n % 10;
	return 0;
}