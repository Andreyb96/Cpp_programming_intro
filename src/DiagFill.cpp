#include <iostream>
using namespace std;
int main()
{
    int n, m, l = 1;
    cin >> n >> m;
    int a[n][m];
    for(int x = 0; x < n + m; x++)
    {
        for(int y = 0; y < n; y++)
        {
            if(x-y>=0 && x-y<m)
            {
                a[y][x-y] = l;
                l++;
            }
        }
    }
   
    //вывод
    cout<<" ";
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
          std::cout.width(4); std::cout << a[i-1][j-1];}
    cout<<endl;}
   
  return 0;
} 