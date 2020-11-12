#include<iostream>
using namespace std;
int IsPointInArea(int a, int b)
{
  if(((a+1)*(a+1)+(b-1)*(b-1)<=4 && b>=2*a+2 && b>=-a && b>=0) || ((a+1)*(a+1)+(b-1)*(b-1)>=4 && b<=2*a+2 && b<=-a && b<=0) )
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
}
int main()
{
  int x, y;
  cin >> x >> y;
  IsPointInArea(x,y);
}