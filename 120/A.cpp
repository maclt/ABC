#include <iostream>
using namespace std;
 
int main() {
  int A, B, C;
  cin >> A >> B >> C;
  
  int num = B / A;
  if(num>C) {
    cout << C << endl;
  } else {
    cout << num << endl;
  }
  
  return 0;
}
