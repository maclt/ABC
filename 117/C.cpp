#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  
  vector<int> A(M,0);
  for(int i=0; i<M; i++) {
    cin >> A[i];
  }
  
  sort(A.begin(), A.end());
  
  vector<int> B(M-1,0);
  for(int i=0; i<M-1; i++) {
    B[i] = A[i+1]- A[i];
  }
  
  sort(B.begin(), B.end(), greater<int>());
  
  long long sum = 0;
  for(int i=N-1; i<M-1; i++) {
    sum += B[i];
  }
  
  cout << sum << endl;
  
  return 0;
}
