#include <iostream>
#include <vector>
using namespace std;
 
int main() {
  int N, tmp, sum;
  cin >> N;
  
  vector<int> A(N), C(N-1);
  
  sum = 0;
  for(int i=0; i<N; i++) {
    cin >> A[i];
  }
  for(int i=0; i<N; i++) {
    cin >> tmp;
    sum += tmp;
  }
  for(int i=0; i<N-1; i++) {
      cin >> C[i];
  }
 
  for(int i=0; i<N-1; i++) {
    if(A[i+1]-A[i] == 1){
      sum += C[A[i]-1];
    }
  }
  
  cout << sum << endl;
  return 0;
}
