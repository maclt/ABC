#include <iostream>
#include <string>
using namespace std;

int main() {
  string F, A;
  cin >> F;
  cin >> A;
  int n;
  for(int i=0; i<3; i++) {
    if(F[i] == A[i]) {
      n++;
    }
  }
  cout << n << endl;
  return 0;
}