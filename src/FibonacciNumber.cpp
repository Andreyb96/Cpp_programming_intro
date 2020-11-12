#include <iostream>
using namespace std;
int main() {
  int N, f2 = 2, f1 = 1, i = 1, d = 0;
  cin >> N;
  while (i<=N) {if (N == i) {cout << f2; return 0;}
    f2++;
    d = i;
    i+= f1;
    f1 = d;}
  cout << -1;}