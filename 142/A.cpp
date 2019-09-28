#include <iostream>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  if(N%2==0) {
    cout << ((double)(N/2)) / ((double)N) << endl;
  } else {
    cout << ((double)(N/2+1)) / ((double)N) << endl;
  }
  return 0;
}
