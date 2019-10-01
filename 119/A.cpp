#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main() {
  string S;
  cin >> S;
  
  int mm = stoi(S.substr(5,2));
  
  if(mm>4) {
    cout << "TBD" << endl;
  } else {
    cout << "Heisei" << endl;
  }
    
  return 0;
}
