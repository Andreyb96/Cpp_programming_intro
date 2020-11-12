#include <iostream>
using namespace std;
int main() {
int i, n, m = 1;
  cin >> n;
  i = n;
  while (n != 0) {
      cin >> n;
          if (n >= i){
            m = i;
          i = n;
          }
      else if (n >= m)
      {
            m = n;
    }
      else
      {
      continue;
    }
  }
  cout << m;
  return 0;
}