#include <iostream>

using namespace std;

int main() {

const int size = 20;

int n, m;

int arr[size][size];

cin >> n >> m;

for (int i = 0; i < n; ++i) {

for (int j = 0; j < m; ++j) {

cin >> arr[i][j];

}

}

int k;

cin >> k;

int cnt = 0;

int row = 0;

bool query = false;

for (int i = 0; i < n && !query; ++i) {

for (int j = 0; j < m && !query; ++j) {

if (arr[i][j] == 0) {

++cnt;

}

else {

cnt = 0;

}

if (cnt == k) {

query = true;

row = i + 1;

}

}

cnt = 0;

}

cout << row;

return 0;

}