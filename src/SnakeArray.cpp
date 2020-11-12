#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
	int i, j, k, n, m, a[30][30];
	cin >> n >> m;
	k = 1;
	//for (i = 0; i != n; i++) {
	//	for (j = 0; j != m; j++) {
	//		cin >> a[i][j];
	//	}
	//}
	for (i = 0; i != n; i++) {
		if (i % 2 == 0) {
			for (j = 0; j != m; j++) {
				a[i][j] = k;
				k++;
			}
		}
		else {
			for (j = m - 1; j >= 0; j--) {
				a[i][j] = k;
				k++;
			}
		}
	}
	for (i = 0; i != n; i++) {
		for (j = 0; j != m; j++) {
			cout << setw(4) << a[i][j];
		}
		cout << endl;
	}
		return 0;
}