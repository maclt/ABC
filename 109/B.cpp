#include <iostream>
#include <set>
using namespace std;
 
int main() {
  int N;
  set<string> S = {};
  string s;
  char c;
  
  cin >> N >> s;
  c = s[0];
    
  for(int i=0; i<N; i++) {
    if(S.end()==S.find(s) && c==s[0]) {
      S.insert(s);
    } else {
      cout << "No" << endl;
      break;
    }
    c = s[s.size()-1];
    cin >> s;
  }
  
  if(N==S.size()) {
    cout << "Yes" << endl;
  }
  
  return 0;
}
