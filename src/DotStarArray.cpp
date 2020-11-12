#include <iostream>
using namespace std;
int main() {
  int a[15][15];
    int N;
    cin >> N;
    for(int y=0; y<N; y++)
    {
        for(int x=0; x<N; x++)
        {
            if(x==y || x==N/2 || y==N/2 || x==N-y-1)
            {
                cout << "* ";
            }
            else
            {
                cout <<". ";
            }
           
               
        }
        cout << endl;
    }
 

    return 0;
}