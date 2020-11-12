#include <iostream>
using namespace std;
int main() {
    char s;
    cin>>s;
  if((int)s>=97 && (int)s<=122){
      cout<<(char)toupper(s);
  }else if((int)s>=65 && (int)s<=90){
      cout<<(char)tolower(s);
  }else{cout<<(char)s;}
    return 0;
}