#include <iostream>
using namespace std;

int main() {
  int N, T, c, t;
  cin >> N >> T;
  
  int min_c = 1001;
  for(int i=0; i<N; i++) {
    cin >> c >> t;
    if(t>T) {
      continue;
    } else {
      if(c<min_c) {
        min_c = c;
      }
    } 
  }
  
  if(min_c==1001) {
    cout << "TLE" << endl;
  } else {
    cout << min_c << endl;
  }
  
  return 0;

}
