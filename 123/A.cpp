#include <iostream>
using namespace std;
 
int main() {
  int A[5];
  int k;
  
  for(int i=0; i<5; i++) {
    cin >> A[i];
  }
  cin >> k;
  
  if(A[4]-A[0] <= k) {
    cout << "Yay!";
  } else {
    cout << ":(";
  }
  return 0;
}
