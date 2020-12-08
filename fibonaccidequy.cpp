
#include <iostream>
using namespace std;
#define MAX 300

int Fibo(int);

int main()
{
	int x;
	cin >> x;
  cout << Fibo(x);
  return 0;
}
int Fibo(int n){
  if (n==0 || n==1) return n;
  return Fibo(n-1) + Fibo(n-2);
}
