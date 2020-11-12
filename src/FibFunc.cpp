#include <iostream>
int fib(int n) {
  return n == 0 || n == 1 ? n : fib(n - 1) + fib(n - 2);
}
int main() {
  int n;
  std::cin >> n;
  std::cout << fib(n) << "\n";
}