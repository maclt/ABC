#include <iostream>
using namespace std;

int main() {
  string S;
  int max_len = 0;
  int tmp_len = 0;
  cin >> S;
  
  for(int i=0; i<S.length(); i++) {
    char c = S[i];
    if(c=='A'||c=='T'||c=='G'||c=='C') {
      tmp_len++;
      if(max_len < tmp_len) {
        max_len = tmp_len;
      }
    } else { 
      tmp_len = 0;
    }
  }
  cout << max_len;
  
  return 0;
}
