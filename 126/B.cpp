#include <iostream>
using namespace std;

int main() {
  string S, ans;
  
  cin >> S;
  int f = stoi(S.substr(0,2));
  int l = stoi(S.substr(2,2));
  
  if (1 <= f && f <= 12 && 1 <= l && l <= 12) {
    ans = "AMBIGUOUS";
  } else if (1 <= f && f <= 12) {
    ans = "MMYY";
  } else if(1 <= l && l <= 12) {
    ans = "YYMM";
  } else {
    ans = "NA";
  }
  
  cout << ans << endl;
  
  return 0;
}
