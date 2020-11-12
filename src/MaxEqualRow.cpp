#include <iostream>

using namespace std;

int main() {
  // put your code here
  int N = 555;
  cin >> N;  
  int prev = N, count = 0, max_count = 0;
  while (N != 0){
    if (N == prev){ count++; }
    else { count = 1; prev = N; }
    if (count > max_count){ max_count = count; }
    cin >> N;
  }
  cout << max_count;
  return 0;
} 