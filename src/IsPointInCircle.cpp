#include <iostream>
#include "math.h"

using namespace std;

string IsPointInCircle(double x, double y, double xc, double yc, double r){
return pow(r, 2) >= pow(x - xc, 2) + pow(y - yc, 2)? "YES": "NO";
}

int main() {
double x, y, xc, yc, r;
cin >> x >> y >> xc >> yc >> r;
cout << IsPointInCircle(x, y, xc, yc, r);
return 0;
}