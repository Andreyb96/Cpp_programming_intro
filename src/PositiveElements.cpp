#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	int n,k;
	cin >> n;
	k = 0;
	vector <int> a(n);
	//считывание
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	//обработка и вывод
	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
			k++;
		}
	}
	cout << k;
}