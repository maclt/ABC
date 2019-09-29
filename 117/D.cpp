#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
long long pow_ll(long long a, int n)  {
  long long p = 1;
  for(int i=0; i<n; i++) {
    p *= a;
  }
  return p;
}
 
long long ord2(long long num) {
  long long ord = 0;
  while(num != 0) {
    num /=  2;
    ord++;
  }
  return ord;
}
 
int main() {
  long long N, K;
  cin >> N >> K;
 
  vector<long long> A(N,0);
  vector<long long> V(40,0);
 
  for(int n=0; n<N; n++) {
    cin >> A[n];
    for(long long i=0; i<40; i++) {
      if (A[n] & ((long long)1<<i)) {
        V[i]++;
      }
    }
  }
  
  /* 最適なXを発見 */
  int i = 0;
  long long X = 0;
  for(int i=39; i>=0; i--) {
    if(V[i]>=N-V[i]) {
       continue;
    }
    
    long long X_tmp = X | ((long long)1<<i);
    
    if(X_tmp<=K) {
      X = X_tmp;
    }
    
  }
  
  
  long long sum = 0;
  for(auto a:A) {
    sum += a ^ X;
  }
  
  cout << sum << endl;
  
  return 0;
}
