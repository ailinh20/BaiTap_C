#include<iostream>
using namespace std;

int main()
{
  string s;
  int sumdigit = 0;
  cin >> s; // nay dung khi gia tri nhap zo la chuoi so
  for (auto digit : s)
  {
    sumdigit += (digit - '0');
  }
  cout << "result: " << sumdigit;
  return 0;
}
