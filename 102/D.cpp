#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int N;
  long P, Q, R, S, P_tmp, Q_tmp, R_tmp, S_tmp;
  long X, X_min, Y, Y_min, res, tmp_res;
  
  cin >> N;
  
  vector<int> A(N);
  vector<long> B(N+1);
  
  B[0] = 0;
  for(int i=0; i<N; i++) {
    cin >> A[i];
    B[i+1] = B[i] + A[i];
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
      }
    }
    tmp_res = max({abs(P-Q),abs(Q-R),abs(R-S),abs(P-R),abs(Q-S),abs(P-S)});
    if(res > tmp_res) {
      res = tmp_res;
    }
  }
  cout << res << endl;
  return 0;
}
