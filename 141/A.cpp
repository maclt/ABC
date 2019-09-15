#include <iostream>
using namespace std;
 
int main() {
  string S, T;
  cin >> S;
  if(S=="Sunny") {
    T = "Cloudy";
  } else if(S=="Cloudy") {
    T = "Rainy";
  } else {
    T = "Sunny";
  }
  
  cout << T << endl;
  
 return 0;
}
