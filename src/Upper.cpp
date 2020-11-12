#include <iostream>
#include <string>
using namespace std;
int main() {
    char s;
    cin >> s;
    if(s >= '0' && s <= '9') {
      cout << s;
    }
    else if(s >= 'A' && s <= 'Z') {
    cout << s;
    }
    else if(s >= 'a' && s <= 'z') {
    int m = s - 'a';
    char s2;
    s2 += 'A' + m;
    cout << s2;
    }
    else {
      cout << s;
    }
  return 0;
}