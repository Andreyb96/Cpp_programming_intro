#include <iostream>

#include <cmath>

using namespace std;

int main() {

int n, m, x, y, temp;

cin >> n ; int a[n][n];

for (int i = 0; i < n; i++) {

for (int j = 0; j < n; j++) {

cin >> a[i][j];

} }

cin >> m;
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
if ((i-j)==m){cout << a[i][j]<< " ";}
}}




return 0; }