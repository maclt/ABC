#include <iostream>
using namespace std;
 
int main() {
  int N, M;
  cin >> N >> M;
  
  int L, R, L_max, R_min;
  L_max = 1;
  R_min = N;
  
  for(int i=0; i<M; i++) {
    cin >> L >> R;
    if(L_max < L) {
      L_max = L;
    }
    if(R_min > R) {
      R_min = R;
    }
  }
  
  if(R_min < L_max) {
    cout << 0 << endl;
  } else {
    cout << R_min - L_max + 1 << endl;
  }
  
  return 0;
}
