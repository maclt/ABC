#include <iostream>
using namespace std;

int main () {
  string S;
  cin >> S;
  int len = 0;
  int ans = 0;
  
  while (len != S.size()) {
    len = S.size();
    for (int i=len-2; i>=0; i--) {
      if(S[i]!=S[i+1] && S[i+1]!=NULL) {
        S.erase(i,2);
        ans += 2;
      }
    }      
  }
  
  cout << ans << endl;
  
  return 0;
}
