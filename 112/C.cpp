#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  int X[N], Y[N], H[N];
  
  for(int i=0; i<N; i++) {
    cin >> X[i] >> Y[i] >> H[i];
  }
  
  int t = 0;
  for(int i=0; i<N; i++) {
    if(H[i]!=0) {
      t = i;
    }
  }
  
  bool flag = false;
  for(int x=0; x<=100; x++) {
    for(int y=0; y<=100; y++) {
      int tmp = abs(X[t]-x) + abs(Y[t] - y) + H[t];
      for(int i=0; i<N; i++) {
        int h = abs(X[i]-x) + abs(Y[i] - y) + H[i];
        if(H[i] != 0) {
          if(tmp==h) {
            flag = true;
          } else {
            flag = false;
            break;
          }
        } else {
          if(tmp<=h) {
            flag = true;
          } else {
            flag = false;
            break;
          }
        }
      }
      if(flag==true) {
        cout << x << " " << y << " " << tmp << endl;
        return 0;
      }
    }
  }
  
  return 0;
}
