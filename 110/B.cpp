#include <iostream>
using namespace std;
 
int main() {
  int N, M, X, Y, x, y;
  cin >> N >> M >> X >> Y;
  
  int war = 0;
  
  int Z = -101;
  for(int i=0; i<N; i++) {
    cin >> x;
    if(Z<x) {
      Z = x;
    }
  }
  
  if(Z<X) {
      Z = X;
  }
    
  for(int i=0; i<M; i++) {
    cin >> y;
    if(y<=Z) {
      war = 1;
      break;
    }
  }
  
  if(Y<=Z) {
    war = 1;
  }
  
  if(war==1) {
    cout << "War" << endl;
  } else {
    cout << "No War" << endl;
  }
  
  
  return 0;
}
