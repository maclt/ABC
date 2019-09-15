#include <iostream>
#include <map>
using namespace std;
 
int mod = 1000000000+7;
long long fac[510000], finv[510000], inv[510000];
 
void factTable() {
  fac[0] = fac[1] = 1;
  finv[0] = finv[1] = 1;
  inv[1] = 1;
  for(int i=2; i<510000; i++){
    fac[i] = (fac[i-1]*i) % mod;
    inv[i] = mod - inv[mod%i] * (mod/i) % mod;
    finv[i] = finv[i-1] * inv[i] % mod;
  }
}
 
long long combi(int n, int k){
  if(n<k) {
    return 0;
  }
  if(n<0 || k<0) {
    return 0;
  }
  return fac[n] * (finv[k] * finv[n-k] % mod) % mod;
}
 
int main() {
  int N, M;
  cin >> N >> M;
  int M_tmp = M;
  map<int, int> primes;
  
  for(int i=2; i*2<=M; i++) {
    while(M_tmp%i==0) {
      if(primes.find(i)==primes.end()) {
        primes.insert(make_pair(i,1));
      } else {
        primes[i]++;
      }
      M_tmp/=i;
    }
  }
  
  factTable();
  
  int ans = 1;
  for(auto itr=primes.begin(); itr!=primes.end(); itr++) {
    int pow = itr->second;
    ans = (ans*combi(pow+N-1,N-1))%mod;
  }
  
  cout << ans << endl;
  
  return 0;
}
