#include <iostream>
#include <cmath>
using namespace std;

int checksnt(int n);
int main(){
  int n, dem=0, a=1;
  cin >> n;
  for (int i=2; i<=n; i++){
    if (checksnt(i)){
      if (i-a==2)
      {
        cout << a << ", " << i << endl;
        dem++;
      }
      a=i;
    }
  }
  cout << "Tong: " << dem << " cap so sinh doi < " << n;
  return 0;
}
int checksnt(int n){
  if (n<2) return 0;
  for (int i=2; i<=sqrt(n); i++)
    if (n%i==0) return 0;
  return 1;
}
