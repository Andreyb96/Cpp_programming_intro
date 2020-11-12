#include <iostream>
#include <string>
using namespace std;
int main() {
  string a;
    string text = "yes";
    getline(cin, a);
    for(int i=0; i<a.length()/2; i++)
    {
        if(a[i] != a[a.length()-1-i]) text = "no";
    }
    cout << text;
  return 0;
}