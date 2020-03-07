#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
  float A, B;
  cin >> A >> B;
  float Amin = A / 0.08;
  float Amax = (A+1)/ 0.08;
  float Bmin = B / 0.1;
  float Bmax = (B+1) / 0.1;
  
  float Amin_ = ceil(Amin);
  float Bmin_ = ceil(Bmin);
  
  if(Amin_>=Bmax || Bmin_>=Amax) {
    cout << -1;
  } else {
    if(Amin_>Bmin_) {
      cout << Amin_; 
    } else {
      cout << Bmin_;
    }
  }
  
  return 0;
}
