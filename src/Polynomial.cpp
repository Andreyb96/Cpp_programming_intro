#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
  double n, x, a,k,o=1;
  cin >> n >> x >> a ;
 
  if (n == 0) {
    cout << a;
  }
  else {
    k = a*x;
    while (o != n + 1) {
      cin >> a;
      if (o == 1) {
        k = k + a;
        o++;
      }
      else {
        k = k *x + a;
        o++;
      }
    }
    cout << k;
  }
  return 0;

}