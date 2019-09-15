#include <iostream>
using namespace std;

int main() {
  string N;
  cin >> N;
  
  for(int i=0; i<3; i++) {
    if(N[i]=='1') {
      N[i] = '9';
    } else {
      N[i] = '1';
    }
  }
  
  cout << N << endl;
  
  return 0;
}
