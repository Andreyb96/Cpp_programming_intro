#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double n, sum, mean;
	int i;
	std::cout.precision(10);
	sum = 0;
	i = 0;
	n = 1;
	while (n != 0) {
		cin >> n;
		sum += n;
		i++;
	}
	mean = sum / (i - 1);
	cout << mean;
	return 0;
}