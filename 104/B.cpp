#include <iostream>
#include <string>
using namespace std;

bool valid(string S_) {
  int len = S_.size();
  bool flag = false;
  for(int i=1; i<len; i++) {
    if(i != 1 && i < len-1 && S_[i] == 'C' && flag == false) {
      flag = true;
    } else if (i !=1 && S_[i] == 'C' && flag == true) {
      return false;
    } else if((S_[i] < 'a') || (S_[i] > 'z')) {
      return false;
    }
  }
  
  return flag;
}

int main() {
  string S;
  cin >> S;
  
  if(S[0] == 'A' && valid(S) == true) {
    cout << "AC" << endl;
  } else {
    cout << "WA" << endl;
  }
  return 0;
}