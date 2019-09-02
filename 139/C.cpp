#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, H, H_tmp, max, n;
  max = n = 0;
  
  cin >> N;
  cin >> H_tmp;
  for(int i=1; i<N; i++) {
    cin >> H;
    if(H_tmp >= H) {
      n++;
    } else {
      if(n>=max) {
        max = n;
      }
      n = 0;
    }
    H_tmp = H;
  }
  
  if(n>=max) {
    max = n;
  }
  
  cout << max << endl;
  return 0;
}