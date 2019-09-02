#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int A1, A2, A3, Amax, Amin;
  cin >> A1 >> A2 >> A3;
  
  Amax = max({A1, A2, A3});
  Amin = min({A1, A2, A3});
  
  cout << Amax - Amin << endl;
  return 0;
}