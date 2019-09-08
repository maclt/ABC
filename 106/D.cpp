#include <iostream>
#include <vector>
using namespace std;

int N, M, Q, L, R;
int A[501][501], C[501][501];

int main() {
  cin >> N >> M >> Q;

  for(int i=1; i<=M; i++) {
    cin >> L >> R;
    A[L][R]++;
  }
  
  for(int i=1; i<=N; i++) {
    for(int j=1; j<=N; j++){
      C[i][j] = C[i][j-1] + A[i][j];
    } 
  }
  
  for(int k=1; k<=Q; k++) {
    int p, q, sum;
    cin >> p >> q;
    sum =0;
    for(int i=p; i<=q; i++){
      sum += C[i][q] - C[i][p-1];
    }
    cout << sum << endl;
  }
  
  return 0;
}
