#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N,0);
  
  for(int i=0; i<N; i++) {
    cin >> A[i];
  }
  
  sort(A.begin(), A.end());
  
  int min_diff = 1e9+10;
  for(int i=0; i<N-K+1; i++) {
    int tmp = A[i+K-1] - A[i];
    if(tmp<min_diff) {
      min_diff = tmp;
    }
  }
  
  cout << min_diff << endl;
  
  return 0;
}
