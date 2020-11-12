#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	int n, i;
	map <string, string> slovar;
	string str1, str2;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> str1 >> str2;
		slovar[str1] = str2;
	}
	cin >> str1;

	for (auto now : slovar) {
		if (str1 == now.first) {
			cout << now.second;
		}
		else if (str1 == now.second) {
			cout << now.first;
		}
	}

	return 0;
}