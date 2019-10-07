
#include <iostream>
using namespace std;
 
int GCD(int A, int B) {
  if(A<B) {
    return GCD(B,A);
  }
  
  int R = A % B;
  
  if(R==0) {
    return B;
  } else {
    return GCD(B,R);
  }
}
 
int main() {
  int A, B, K;
  cin >> A >> B >> K;
  
  int gcd = GCD(A,B);
  int i = gcd;
  int cnt = 0;
  while(gcd) {
    if(gcd%i==0) {
      cnt++;
      if(cnt==K) {
        cout << i << endl;
        break;
      }
    }
    i--;
  }
  
  return 0;
}
