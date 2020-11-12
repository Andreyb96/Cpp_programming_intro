#include <iostream>
#include <set>

using namespace std;

int main() {
	set <int> s, v;
	set<int>::iterator ik;
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
			v.insert(k);
		}
	}
	
	for (ik = v.begin(); ik != v.end(); ++ik)
		cout << *ik << " ";

	return 0;
}