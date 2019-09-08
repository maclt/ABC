#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int N, m, cnt;
  cin >> N;
  
  cnt = 0;
  for(int j=1; j<=N; j++) {
    m = 0;
    if(j%2==0){
      continue;
    }
    for(int i=1; pow(i,2)<=j; i++) {
      if(pow(i,2)==j) {
        m++;
      } else if(j%i==0) {
        m += 2;
      }
    }
    if(m==8) {
      cnt++;
    }
  }
  
  cout << cnt << endl;
  
  return 0;
}
