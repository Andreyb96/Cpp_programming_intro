using namespace std;
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

int main() {
  int n, r=0;
  cin >> n;
  vector <int> a;
  //schit
  for (int i = 0; i < n; i ++ ){
        int temp;
        cin >> temp;
          a.push_back(temp);
  }
  // обработка
  for (int i = 0; i < n; i += 1){
    r = 0;
    for (int i2 = 0; i2 < n; i2 += 1)
    {

      if (a[i] == a[i2]) r++;
    }
    if (r == 1)
      cout << a[i] << " ";
  }    
  return 0;
}