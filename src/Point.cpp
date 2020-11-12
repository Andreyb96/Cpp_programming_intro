#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

struct point {
  int x, y;
  float l;
};

bool cmp(point a, point b) {
  return a.l < b.l;
}

int main()
{
  int N, x, y;
  cin >> N;
  vector <point> a(N);
  for (int i = 0; i < N; i++)
  {
    cin >> x >> y;
    a[i].x = x;
    a[i].y = y;
    a[i].l = sqrt(float(x*x + y*y));
  }
  sort(a.begin(), a.end(), cmp);
  for (int i = 0; i < N; i++)
  {
    cout << a[i].x << " " << a[i].y << endl;
  }
    return 0;
}