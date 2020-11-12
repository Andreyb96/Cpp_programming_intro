#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
for (int i = 0; i < n * n; i++) {
if (!(i % n)) cout << endl;
cout << abs(i / n - i % n) << " ";
}
}