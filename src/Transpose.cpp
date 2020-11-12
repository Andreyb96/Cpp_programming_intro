#include <iostream>
using namespace std;
int main() {
  int n, m, temp;
    cin >> n >> m;
    if(m>n)
    {
    temp = m;
    }
    else
    {
        temp = n;
    }
    int a[temp][temp];
    for(int y=0; y<n; y++)
    {
        for(int x=0; x<m; x++)
        {
            cin >> a[y][x];
        }
    }
    if(m>n)
    {
        for(int y=0; y<n; y++)
        {
            for(int x=y; x<m; x++)
            {
                temp = a[x][y];
                a[x][y] = a[y][x];
                a[y][x] = temp;
            }
        }
    }
    else
    {
        for(int x=0; x<m; x++)
        {
            for(int y=x; y<n; y++)
            {
                temp = a[x][y];
                a[x][y] = a[y][x];
                a[y][x] = temp;
            }
        }
    }
    for(int y=0; y<m; y++)
    {
        for(int x=0; x<n; x++)
        {
            cout << a[y][x] << " ";
        }
        cout << endl;
    }
  return 0;
}