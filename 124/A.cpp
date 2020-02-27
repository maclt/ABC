#include <iostream>
using namespace std;
 
int main() {
  int A, B;
  cin >> A >> B;
  
  int num = 0;
  for(int i=0; i<2; i++) {
    if(A > B) {
      num += A;
      A--;
    } else {
      num += B;
      B--;
    }
  }
  
  cout << num << endl;
  
  return 0;
}
