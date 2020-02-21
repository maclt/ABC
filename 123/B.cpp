#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int N[5];
  int argMinNRes = -1;
  int minNRes = 10;
  
  for(int i=0; i<5; i++) {
    cin >> N[i];
    if(N[i]%10 != 0 && N[i]%10 < minNRes) {
      minNRes = N[i]%10;
      argMinNRes = i;
    }
  }
    
  int total_minute = 0;
  if(argMinNRes == -1) {
    for(int i=0; i<5; i++) {
      total_minute += N[i];
    }
  } else {
    for(int i=0; i<5; i++) {
      if(i != argMinNRes) {
        total_minute += ceil(N[i]/10.0)*10;
      } else {
        total_minute += N[i];
      }
    }
  }
  
  cout << total_minute << endl;
}
