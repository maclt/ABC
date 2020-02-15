#include <iostream>
using namespace std;

int main() {
  int N, Q;
  string S;
  
  cin >> N >> Q;
  cin >> S;
  
  int num[N];
  num[0] = 0;
  
  for(int i=1; i<N; i++) {
    if(S.substr(i-1,2) == "AC") {
      num[i] = num[i-1] + 1;
    } else {
      num[i] = num[i-1];
    }
  }
  
  int L, R;
  for(int i=0; i<Q; i++) {
    cin >> L >> R;
    cout << num[R-1] - num[L-1] << endl;
  }
  
  return 0;
}
