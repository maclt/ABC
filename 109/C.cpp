#include <iostream>
using namespace std;
 
int gcd(int a, int b) {
  while(b!=0) {
    if(a < b) {
      swap(a, b);
    }
    if(b==0) {
      break;
    }
    a %= b;
  }
  return a;
}
 
int main() {
  int N, X, tmp, GCD;
  
  cin >> N >> X >> tmp;
  GCD = abs(X-tmp);
  for(int i=1; i<N; i++) {
    cin >> tmp;
    GCD = gcd(abs(X-tmp),GCD);
  }
  
  cout << GCD << endl;
  
  return 0;
}
