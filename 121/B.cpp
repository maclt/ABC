#include <iostream>
#include <vector>
using namespace std;
 
int main() {
  int N, M , C;
  cin >> N >> M >> C;
  
  vector<int> B(M,0);
  for(int m=0; m<M; m++) {
    cin >> B[m];
  }
  
  int ans = 0;
  for(int n=0; n<N; n++) {
    int sum = 0;
    for(int m=0; m<M; m++) {
      int A;
      cin >> A;
      sum += A * B[m];
    } 
    if(sum+C>0) {
      ans++;
    }
  }
  
  cout << ans << endl;
  
  return 0;
}
