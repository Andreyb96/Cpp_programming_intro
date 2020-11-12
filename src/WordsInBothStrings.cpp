#include <iostream>
#include <set>

using namespace std;

int main() {
	set <int> s;
	int n, k, m;
	int cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		s.insert(k);
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> k;
		for (auto now = s.lower_bound(k); now != s.upper_bound(k); now++) {
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}