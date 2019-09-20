#include <iostream>
using namespace std;
 
int main() {
  string S;
  int tmp;
  
  cin >> S;
  int m = 1000;
  for(int i=0; i<S.size()-2; i++) {
    tmp = stoi(S.substr(i,3));
    tmp = abs(tmp-753);
    if(tmp<m) {
      m = tmp;
    }
  }
  
  cout << m << endl;
  
  return 0;
}
