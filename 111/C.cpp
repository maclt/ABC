#include <iostream>
#include <map>
using namespace std;

int main() {
  int N, tmp;
  map<int, int> A, B;
  cin >> N;
  
  for(int i=1; i<=N; i++) {
    cin >> tmp;
    if(i%2==0) {
      A[tmp]++;
    } else {
      B[tmp]++;
    }
  }
  
  int max_A = 0;
  int secmax_A = 0;
  int argmax_A = 0;
  for(auto itr:A) {
    tmp = itr.second;
    if(tmp > max_A) {
      argmax_A = itr.first;
      secmax_A = max_A;
      max_A = tmp;
    } else if(tmp > secmax_A) {
      secmax_A = tmp;
    }
  }
  
  int max_B = 0;
  int secmax_B = 0;
  int argmax_B = 0;
  for(auto itr:B) {
    tmp = itr.second;
    if(tmp > max_B) {
      argmax_B = itr.first;
      secmax_B = max_B;
      max_B = tmp;
    } else if(tmp > secmax_B) {
      secmax_B = tmp;
    }
  }
  
  int ans;
  if(argmax_A != argmax_B) {
    ans = N - max_A - max_B;
  } else {
    ans = N - max(max_A + secmax_B, secmax_A + max_B);
  }
  
  cout << ans << endl;
  
  return 0;
}
