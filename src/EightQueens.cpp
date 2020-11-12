#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;
int main()
{
  int sum=0;
vector <int> a(16);
for (int i = 0; i < 16; i++) cin >> a[i];
for (int j = 0; j < 16; j+=2)
{
  for(int k=j+2; k<16;k+=2)
  {
    if((a[j]==a[k]) || (a[j+1]==a[k+1]) || (a[j]-a[k]==a[j+1]-a[k+1]) || (a[j]-a[k]==-a[j+1]+a[k+1]))
      {
      sum++;
        }
  }
}
if(sum>0)cout<<"YES";
else cout<<"NO";
system("pause");
  return 0;
}