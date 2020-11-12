#include <iostream>
using namespace std;
int main() {
    int n, m, c = 1;
    cin >> n >> m;
    int a[n][m];
    for(int y=0; y<n; y++)
    {
        for(int x=0; x<m; x++)
        {
            if(x%2 == y%2)
            {
                a[y][x] = c;
                c++;
            }
            else
            {
                a[y][x] = 0;
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