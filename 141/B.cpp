#include <iostream>
using namespace std;
 
int main() {
  int flag = 1;
  string S;
  cin >> S;
  
  for(int i=0; i<S.size(); i++) {
    if(i%2==0) {
      if(S[i]=='L') {
        flag = 0;
        break;
      }
    } else {
      if(S[i]=='R') {
        flag = 0;
        break;
      }
    }
  }
  
  if(flag==0) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
  
 return 0;
}
