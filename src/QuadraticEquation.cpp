#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double b1=b/a;               //x^2-x-2=0
    double c1=c/a;               //(x-1/2)^2-2-1/4=0
    double b2=b1/2;             //(x-0.5)=2.25
    double c2=-c1+b2*b2;   //x-0.5=+-1.5
    if (c2==0){                       //x=1; x=-2
      cout << -b2;
    } else {
        if (c2>0){
          cout << -sqrt(c2)-b2 << " " << sqrt(c2)-b2;
        }
    }
}