#include <iostream>
using namespace std;

void fib(int n) {
  int a = 0;
  int b = 1;

  for (int i = 0; i < n; ++i) {
    cout << a << endl;
    int next = a + b;
    a = b;
    b = next;
  }
}

int main() {
  int n;
  cout << "Введите n -----> ";
  cin >> n;
  cout << "-------- Результат ---------" << endl;
  fib(n);
  return 0;
}
