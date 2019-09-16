#include <iostream>
using namespace std;

int main() {
  int N, M, D1, D2;
  cin >> N >> M;
  
  int D = 0;
  for(int i=1; i*i<=M; i++) {
    if(M%i==0) {
      D1 = i;
      D2 = M/i;
      
      if(D1<=M/N && D<D1) {D = D1;}
      if(D2<=M/N && D<D2) {D = D2;}
    }
  }
  
  cout << D << endl;
  
  return 0;
} 
