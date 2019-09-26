#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
  int N; 
  cin>> N;
  vector<int> A(N,0);
  
  int sum = 0;
  int max = 0;
  for(int i=0; i<N; i++) {
    cin >> A[i];
    sum += A[i];
    if(max<A[i]) {
      max = A[i];
    }
  }
  
  if(max>=sum-max) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
  
  return 0;
}
