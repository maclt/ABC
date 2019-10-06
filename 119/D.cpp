#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
 
int main() {
  int A, B, Q;
  cin >> A >> B >> Q;
  
  vector<long long> S(A,0);
  vector<long long> T(B,0);
  
  for(int i=0; i<A; i++) {
    cin >> S[i];
  }  
  
  for(int i=0; i<B; i++) {
    cin >> T[i];
  }
  
  for(int i=0; i<Q; i++) {
    long long p;
    cin >> p;
    
    long long x, y, w, z;
  
    auto p_s_u = upper_bound(S.begin(), S.end(), p);
    if(p_s_u==S.end()) {
      x = S[S.size()-1];
      y = S[S.size()-1];
    } else {
      x = *p_s_u;
      if(x!=S[0]) {
        y = *(p_s_u-1);
      } else {
        y = x;
      }
    }
  
    auto p_t_u = upper_bound(T.begin(), T.end(), p);
    if(p_t_u==T.end()) {
      w = T[T.size()-1];
      z = T[T.size()-1];
    } else {
      w = *p_t_u;
      if(w!=T[0]) {
        z = *(p_t_u-1);
      } else {
        z = w;
      }
    }
    long long a = abs(p-x) + abs(x-w);
    long long b = abs(p-x) + abs(x-z);
    long long c = abs(p-y) + abs(y-w);
    long long d = abs(p-y) + abs(y-z);
    long long e = abs(p-w) + abs(w-x);
    long long f = abs(p-w) + abs(w-y);
    long long g = abs(p-z) + abs(z-x);
    long long h = abs(p-z) + abs(z-y);
    
    cout << min({a,b,c,d,e,f,g,h}) << endl;
  }
  
  return 0;
}
