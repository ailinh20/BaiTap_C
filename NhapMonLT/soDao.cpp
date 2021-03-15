#include <iostream>
using namespace std;

bool palindrome(int n)
{
  int tmp = n, b=0;
  while (n!=0)
  {
    b = b*10 + n%10;
    n /= 10;
  }
  if (b==tmp) return true;
  return false;
}
int main()
{
  int n;
  cin >> n;
  cout << (palindrome(n)? "true" : "false");
  return 0;
}
