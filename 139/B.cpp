#include <iostream>
using namespace std;

int main() {
  int A, B, n;
  cin >> A >> B;
  for(int i=0; i<99; i++) {
    if((A-1)*i+1 >= B) {
      n = i;
      break;
    }
  }
  cout << n << endl;
  return 0;
}