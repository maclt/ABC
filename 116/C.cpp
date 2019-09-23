#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, tmp, maximums, minimums;
  cin >> N;
  
  if(N==1) {
    cin >> tmp;
    cout << tmp << endl;
    return 0;
  }
  
  vector<int> A(N,0);
  vector<int> B(N-1,0);
  
  bool inc = true;
  bool level_ini = true;
  maximums = minimums = 0;
  for(int i=0; i<N; i++) {
    cout << maximums << minimums << endl;
    cin >> A[i];
    
    if(i==0) {continue;}
    
    if(level_ini) {
      // all values are same
      if(i==N-1) {
        cout << A[i] << endl;
        return 0;
      }
      
      if(A[i]-A[i-1] < 0) {
        maximums += A[i-1];
        inc = false;
        level_ini = false;
      } else if(A[i]-A[i-1] > 0){
        inc = true;
        level_ini = false;
      } else {
        level_ini = true;
      }
      continue;
    }
    
    if(i==N-1) {
      if(A[i]-A[i-1] == 0 && inc==true) {
        maximums += A[i];
      } else if(A[i]-A[i-1] > 0)
        maximums += A[i];
    }
    
    if(A[i]-A[i-1]>0 && inc==true) {
      // nothing to do
    } else if(A[i]-A[i-1]>0 && inc==false) {
      minimums += A[i-1];
      inc = true;
    } else if(A[i]-A[i-1]<0 && inc==true) {
      maximums += A[i-1];
      inc = false;
    } else if(A[i]-A[i-1]<0 && inc==false){
      // nothing to do
    } else {
      // nothing to do
    }
    
  }
  
  cout << maximums - minimums << endl;
  
  return 0;
}
