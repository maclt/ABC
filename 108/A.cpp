#include <iostream>
using namespace std;
 
int main() {
  int K, k;
  
  cin >> K;
  k = K/2;
  
  if(K%2==0) {
    cout << k*k <<endl;
  } else {
    cout << k*(k+1) << endl;
  }
  return 0;
}
