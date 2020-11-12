#include <iostream>
#include <set>

using namespace std;

int main() {
	set <int> s;
	int n,k;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		int cnt = 0;
		for (auto now = s.lower_bound(k); now != s.upper_bound(k); now++) {
			cnt++;
		}
		cnt != 0 ? cout << "YES" : cout << "NO";
		cout << endl;
		s.insert(k);
	}
	return 0;
}