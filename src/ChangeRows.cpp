#include <iostream>
using namespace std;
int main()
{
  int n, m, first, second;
  cin >> n >> m;
  int **arr = new int*[n];
  for (int i = 0; i < n; arr[i] = new int[m], i++);
  for (int i = 0; i < n; i++)for (int j = 0; j < m; cin >> arr[i][j], j++);
  cin >> first >> second;
  for (int i = 0; i < n; swap(arr[i][first], arr[i][second]), i++);
  for (int i = 0; i < n; cout << endl, i++)for (int j = 0; j < m; cout << arr[i][j]<<" ", j++);
  return 0;
}