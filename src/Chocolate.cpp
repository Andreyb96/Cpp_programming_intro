#include <iostream>
using namespace std;

int main()
{
	int N, M, K;
	cin >> N >> M >> K;
	cout << ((((N*M - K)%N == 0 or (N*M - K)%M == 0) and (K < N*M)) ? "YES" : "NO");
	return 0;
}