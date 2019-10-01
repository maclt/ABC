#include <iostream>
using namespace std;
 
int main() {
  int N;
  double x;
  string u;
  
  cin >> N;
  
  double sum = 0;
  for(int i=0; i<N; i++) {
    cin >> x >> u;
    if(u=="JPY") {
      sum += x;
    } else {
      sum += x * 380000;
    }
  }
  
  cout << sum << endl;
  
  return 0;
}
