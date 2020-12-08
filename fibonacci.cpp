#include <iostream>
#include <cmath>
using namespace std;

int fibonacci(int n)
{
  int a=0, b=1, c;
  if (n==0 || n==1) return n;
  for (size_t i = 2; i <= n; i++) {
    c = a + b;
    a = b;
    b = c;
  }
  return c;
}
int main(){
  int n;
  cin >> n;
  if (n<1 || n>30) cout << "So " << n << " khong nam trong khoang [1,30].";
  else cout << fibonacci(n);
  return 0;
}
