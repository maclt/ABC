#include <iostream>
#include <string>
using namespace std;

int main() {
  string S, T, T_, ans;
  int len;
  cin >> S >> T;
  
  ans = "No";
  len = S.size();
  for(int i=0; i<len; i++) {
    T_ = T.substr(i, len-i) + T.substr(0, i);
    if(S == T_) {
      ans = "Yes";
      break;
    }
  }
  
  cout << ans << endl;
  return 0;
}