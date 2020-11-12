#include <iostream>
#include <vector>
using namespace std;
int main() {
  int N, a;
    bool flag;
    vector <int> b;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        cin >> a;
        flag = false;
        for(int i1=0; i1 < b.size(); i1++)
        {
            if(a==b[i1]) flag = true;
        }
        if(flag == false) b.push_back(a);
    }
    cout << b.size();
  return 0;
}