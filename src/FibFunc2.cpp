#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

int fib(int n)
{
    static int k = 0, m=0;

    if(n<=0){
        return k;
    } else {
        k++;
        return fib(n-k);
    }
}

int main() {
    int n;
    cin >> n;

    cout << fib(n-1);
  return 0;
}