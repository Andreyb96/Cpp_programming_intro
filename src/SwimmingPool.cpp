#include <iostream>
using namespace std;

int main()
{
	int N, M, X, Y, min, max;
	cin >> N >> M >> X >> Y;
	if (M < N) {
		min = M;
		max = N;
	} else{
		min = N;
		max = M;
	} 
	if (min - X < X and min - X < Y and min - X < max - Y) {
		cout << min - X;
	} else if (X < Y and X < max - Y){
		cout << X;
	} else if (Y < max - Y) {
		cout << Y;
	} else {
		cout << max - Y;
	}
	return 0;
}