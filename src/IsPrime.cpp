#include <iostream>
#include <cmath>
using namespace std;

int IsPrime(unsigned long a)
{
  unsigned long i;
  if (a == 2)
    return 1;
  if (a == 0 || a == 1 || a % 2 == 0)
    return 0;
  for (i = 3; i*i <= a && a % i; i += 2)   ;
  return i*i > a;
}


int main(){
  int n;
  cin >> n;
  if (IsPrime(n)) cout << "YES";
  else cout << "NO";
  return 0;
}