#include <iostream>
using namespace std;

long long MOD = 1000000007;

int main() {
  long long n, a, b;
  long long temp_n;
  cin >> n >> a >> b;
  
  /* 2^n */
  long long res1 = 1;
  temp_n = n;
  long long N = 2;
  while(temp_n > 0) {
    if(temp_n & 1) {
      res1 = (res1 * N) % MOD;
    }
    N = (N * N) % MOD;
    temp_n >>= 1;
  }
  
  /* nCa */
  long long res2 = 1;
  
  long long A1 = 1 ;
  for(int i=1; i<=a; i++) {
    A1 = (A1 * i) % MOD;
  }
  
  temp_n = MOD-2;
  while(temp_n > 0) {
    if(temp_n & 1) {
      res2 = (res2 * A1) % MOD;
    }
    A1 = (A1 * A1) % MOD;
    temp_n >>= 1;
  }
  
  long long A2 = 1 ;
  for(int i=0; i<a; i++) {
    A2 = (A2 * (n-i)) % MOD;
  }
  
  res2 = (res2 * A2) % MOD;
  
  /* nCb */
  long long res3 = 1;

  long long B1 = 1;
  for(int i=1; i<=b; i++) {
    B1 = (B1 * i) % MOD;
  }
  
  temp_n = MOD-2;
  while(temp_n > 0) {
    if(temp_n & 1) {
      res3 = (res3 * B1) % MOD;
    }
    B1 = (B1 * B1) % MOD;
    temp_n >>= 1;
  }
  
  long long B2 = 1 ;
  for(int i=0; i<b; i++) {
    B2 = (B2 * (n-i)) % MOD;
  }
  
  res3 = (res3 * B2) % MOD;
  
  long long res4 = 1;
  
  long long res = (res1 - res2 - res3 - res4 + MOD*3) % MOD;
  cout << res << endl;
  
  return 0;
}
