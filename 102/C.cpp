#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N, m1, m2, tmp;
  long res1, res2;
  res1 = 0;
  res2 = 0;
  
  cin >> N;
  vector<int> A(N);
  
  for(int i=0; i<N; i++) {
    cin >> tmp;
    A[i] = tmp - (i+1);
  }
  sort(A.begin(), A.end());
  
  if(N%2==0) {
    m1 = A[N/2-1];
    m2 = A[N/2];
    for(int j=0; j<N; j++) {
      res1 += abs(A[j] - m1);
      res2 += abs(A[j] - m2);
    }
    if(res2 > res1) {
      res1 = res2;
    }
  } else {
    m1 = A[N/2];
    for(int j=0; j<N; j++) {
      res1 += abs(A[j] - m1); 
    }
  }
  
  cout << res1 << endl;
  return 0;
}
