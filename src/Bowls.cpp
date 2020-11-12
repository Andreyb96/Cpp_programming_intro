#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  vector <string> xe(n);
  for (int i = 0; i < n; i++) {
    xe[i] = "I";
  }
  vector <int> x(k);
  vector <int> y(k);
  for (int j = 0; j < k; j++) {
    cin >> x[j];
    cin >> y[j];
  }
  for (int i = 0; i < k; i++) {
    for (int j= x[i] - 1; j <= y[i] - 1; j++)
      xe[j] = ".";
  }
  for (int i = 0; i < n; i++) {
    cout << xe[i];
  }
  return 0;
}