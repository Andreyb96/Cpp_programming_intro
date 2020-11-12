#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    char p = ' ';
    char d = s[0];
    int h = 1;
    for (auto d : s)
        if (d == p)
            h++;
    cout << h;
   
    return 0;
}