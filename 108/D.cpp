#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int L, L_, N, M, R;
  cin >> L;
  
  N = 0;
  M = -2;
  L_ = L;
  
  while(L_!=0) {
    N++;
    M += 2;
    L_ /= 2;
  }
  
  R = L-pow(2,N-1);
  for(int i=0; i<N; i++) {
    if (R & (1<<i)) {
      M++;
    }
  }
  
  cout << N << " " << M << endl;
  
  for(int i=0; i<N-1; i++) {
    cout << i+1 << " " << i+2 << " " << 0 << endl;
    cout << i+1 << " " << i+2 << " " << pow(2,i) << endl;
  }
  
  int res = pow(2,N-1);
  for(int i=N-1; i>=0; i--) {
    if (R & (1<<i)) {
      cout << i+1 << " " << N << " " << res << endl;
      res = res + pow(2,i);
    }
  }
  
  return 0;
}
