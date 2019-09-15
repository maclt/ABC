#include <iostream>
#include <vector>
using namespace std;
 
int main() {
  int N, K, Q, tmp;
  cin >> N >> K >> Q;
  vector<int> H(N+1,0);
  
  for(int i=0; i<Q; i++) {
    cin >> tmp;
    H[tmp]++;
  }
 
  for(int i=1; i<=N; i++) {
    if(K-Q+H[i]<=0) {
      cout << "No" << endl;
    } else {
      cout << "Yes" << endl;
    }
  }
  
  return 0;
}
