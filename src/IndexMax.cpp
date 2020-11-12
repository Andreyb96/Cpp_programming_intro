#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
int n, m, x = 0, y = 0, a, am;
cin >> n >> m;
n *= m;
cin >> am;
for (int i = 1; i < n; i++) {
cin >> a;
if (am < a) {
am = a;
x = i / m;
y = i % m;
}
}
cout << x << " " << y;
}