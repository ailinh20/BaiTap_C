#include <iostream>
using namespace std;

int main(){
  int n;
  long long chan=1, le=1;
  cin >> n;
  for (int i=1; i<=n; i++){
    if (i%2==0) chan *= i;
    else le *= i;
  }
  if (n%2==0) cout << chan;
  else cout << le;
  return 0;
}
