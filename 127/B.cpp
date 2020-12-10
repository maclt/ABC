#include <iostream>
using namespace std;

int main() {
  long long r, D, x_2000;
  long long index = 2001;
  cin >> r >> D >> x_2000;
  
  long long x_pre, x;
  x_pre = x_2000;
  while(index <= 2010) {
    x = r * x_pre - D;
    cout << x << endl;
    x_pre = x;
    index++;
  }
  
  return 0;
}
