#include <iostream>
#include <vector>
using namespace std;
 
int main() {
  int H, W;
  int N=0;
  vector<int> V={};
  cin >> H >> W;
  int A[H][W];
  
  for(int h=0; h<H; h++) {
    for(int w=0; w<W; w++) {
      cin >> A[h][w];
    }
  }
  
  for(int h=0; h<H; h++) {
    if(h%2==0) {
      for(int w=0; w<W; w++) {
        if(h==H-1&&w==W-1) {break;}
        if(A[h][w]%2==1 && w!=W-1) {
          V.push_back(h+1);
          V.push_back(w+1);
          V.push_back(h+1);
          V.push_back(w+2);
          A[h][w+1] += 1;
          N++;
        } else if(A[h][w]%2==1 && w==W-1) {
          V.push_back(h+1);
          V.push_back(W);
          V.push_back(h+2);
          V.push_back(W);
          A[h+1][W-1] += 1;
          N++;
        }
      }
    } else {
      for(int w=W-1; w>=0; w--) {
        if(h==H-1&&w==0) {break;}
        if(A[h][w]%2==1 && w!=0) {
          V.push_back(h+1);
          V.push_back(w+1);
          V.push_back(h+1);
          V.push_back(w);
          A[h][w-1] += 1;
          N++;
        } else if(A[h][w]%2==1 && w==0) {
          V.push_back(h+1);
          V.push_back(1);
          V.push_back(h+2);
          V.push_back(1);
          A[h+1][0] += 1;
          N++;
        }
      }
    } 
  }
  
  cout << N << endl;
  for(int i=0; i<V.size(); i++) {
    cout << V[i];
    if(i%4==3) {
      cout << endl;
    } else {
      cout << " ";
    }
  }
  
  return 0;
}

