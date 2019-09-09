#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, K;  
  cin >> N >> K;

  vector<int> A(N, 0);
  
  for(int i=0; i<N; i++) {
    cin >> A[i];
  }
  
  int min_sec = 1e9;
  
  for(int i=0; i<N-K+1; i++) {
    int sec = 0;
    int l = A[i];
    int r = A[i+K-1];
    if(r<0) {
      sec = -l;
    } else if(l>0) {
      sec = r;
    } else {
      sec = min(-l, r) + r - l; 
    }
    if(min_sec>sec) {
      min_sec = sec;
    }
  }
  cout << min_sec << endl;
  return 0;
}
