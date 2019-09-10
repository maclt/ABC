#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
  int N, K;
  long long res;
  cin >> N >> K;
  
  if(K%2==0) {
    res = pow((N/K),3);
    res += pow((N+K/2)/K,3);
  } else {
    res = pow(N/K,3);
  }
  
  cout << res << endl;
  return 0;
}
