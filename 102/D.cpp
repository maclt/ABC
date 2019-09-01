#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int N, tmp;
  long P, Q, R, S, P_tmp, Q_tmp, R_tmp, S_tmp, X, X_min, Y, Y_min, res, res_tmp;
  
  cin >> N;
  vector<long> B(N+1);
  
  B[0] = 0;
  for(int i=0; i<N; i++) {
    cin >> tmp;
    B[i+1] = B[i] + tmp;
  }
  B.erase(B.begin());
  
  res = 9223372036854775807;
  for(int i=2; i<=N-2; i++) {
    X_min = 9223372036854775807;
    for(int j=0; j<=i-2; j++) {
      P_tmp = B[j];
      Q_tmp = B[i-1] - B[j];
      X = abs(P_tmp - Q_tmp);
      if(X_min > X) {
        X_min = X;
        P = P_tmp;
        Q = Q_tmp;
      } else {
        break;
      }
    }
    
    Y_min = 9223372036854775807;
    for(int j=i; j<=N-2; j++) {
      R_tmp = B[j] - B[i-1];
      S_tmp = B[N-1] - B[j];
      Y = abs(R_tmp - S_tmp);
      if(Y_min > Y) {
        Y_min = Y;
        R = R_tmp;
        S = S_tmp;
      } else {
        break;
      }
    }
    res_tmp = max({P,Q,R,S})-min({P,Q,R,S});
    if(res > res_tmp) {
      res = res_tmp;
    }
  }
  cout << res << endl;
  return 0;
}
