#include <iostream>
#include <cmath>
using namespace std;

int MinDivisor(int n,int d=2){
  if (d <= sqrt(n)){
  if (n%d == 0){ return d; }
  else MinDivisor(n, d + 1);
  }
    else return n;
}
int main(){
  int n;
  cin >> n;
  cout << MinDivisor(n);
  return 0;
}