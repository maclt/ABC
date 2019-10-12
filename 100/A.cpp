#include <iostream>
using namespace std;
 
int main() {
  int X, Y;
  cin >> X >> Y;
  if(X > 8 || Y > 8) {
    cout << ":(" << endl;
  } else {
    cout << "Yay!" << endl;
  }
 
  return 0;
}
