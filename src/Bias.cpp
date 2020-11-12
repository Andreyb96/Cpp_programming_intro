using namespace std;
#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
  double a,n=0,s,p;
  cin >> a;
  s = a;
  p = a*a;
  while (a != 0){
    n++;
    cin >> a;
      s = s + a;
    p = p + a*a;

  }
  cout << fixed << setprecision(12);
  cout << sqrt((p - (s*s / n)) / (n - 1));

  return 0;
}