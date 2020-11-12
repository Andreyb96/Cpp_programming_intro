#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	int n, min;
	min = 1000;
	cin >> n;
	vector <int> a(n);
	//считывание
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	//обработка и вывод
	for (int i = 1; i < n; i++) {
		if (min > a[i] and a[i] > 0) {
			min = a[i];
		}
	}
	cout << min;
}