#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
  float T, A, h, tmp;
  int N, city;
  cin >> N >> T >> A;
  
  float t = 1e9;
  for(int i=1; i<=N; i++) {
    cin >> h;
    tmp = abs(A-(T-h*0.006));
    if(t>tmp) {
      t = tmp;
      city = i;
    }
  }
  
  cout << city << endl;
  
  return 0;
}
