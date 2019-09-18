#include <iostream>
using namespace std;

long long A[100][10];
int mod = 1000000007;

int main() {
  int H, W, K;
  cin >> H >> W >> K;
  
  if(W==1) {
    cout << 1 << endl;
    return 0;
  }
  
  
  A[0][1] = 1;
  for(int h=1; h<=H; h++) {
    for(int w=1; w<=W; w++) {
      for(int i=0; i<1<<(W-1); i++) {
        bool connected = false;
        for(int j=0; j<W-2; j++) {
          if(i>>j&1 && i>>j+1&1) {
            connected = true;
            break;
          }
        }
        if(!connected) {
          if(w!=W && i>>w-1&1) {
            A[h][w+1] = (A[h][w+1] + A[h-1][w])%mod;
          } else if(w!=1 && i>>w-2&1) {
            A[h][w-1] = (A[h][w-1] + A[h-1][w])%mod;
          } else {
            A[h][w] = (A[h][w] + A[h-1][w])%mod;
          }
        }
      }
    }
  }
  
  cout << A[H][K] << endl;
  
  return 0;
}
