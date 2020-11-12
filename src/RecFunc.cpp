#include <iostream>
using namespace std;
int n;
int rec(int n, int sum){
    if (n==0)
    return sum;
    sum+=n;
    cin>>n;
    return rec(n,sum);
}
int main(){
    cin>>n;
    cout<<rec(n,0);
    return 0;
}