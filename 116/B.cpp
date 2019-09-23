#include <iostream>
#include <set>
using namespace std;
 
int main() {
  int s, ans;
  cin >> s;
  
  set <int> S;
  ans = 0;
  while(true) {
    ans++;
    
    if(S.find(s)!=S.end()) {
      break;
    }
    
    S.insert(s);
    
    if(s%2==0) {
      s = s/2;
    } else {
      s = 3*s + 1;
    }
  }
  
  cout << ans << endl;
  return 0;
}
