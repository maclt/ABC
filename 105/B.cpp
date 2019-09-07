#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  for(int x=0; x<=N/7+1; x++) {
    for(int y=0; y<=N/4+1; y++) {
      if(7*x+4*y == N) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}