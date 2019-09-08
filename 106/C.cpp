#include <iostream>
using namespace std;

int main() {
  int cnt = 0;
  int K;
  string S;
  char c;
  cin >> S >> K;
  
  for(int i=0; i<S.length(); i++) {
    if(S[i] == '1') {
      cnt++;
    } else {
      c = S[i];
      break;
    }
  }

  if(K<=cnt){
    cout << 1 << endl;
  } else {
    cout << c << endl;
  }
  
  return 0;
}
