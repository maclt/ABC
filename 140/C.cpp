#include <iostream>
using namespace std;
 
int main() {
  int N, n, tmp, sum;
  cin >> N;
  
  sum = 0;
  tmp = 1e7;
  
  for(int i=0; i<N-1; i++) {
    cin >> n;
    sum += min(n, tmp);
    tmp = n;
  }
  
  cin >> n;
  sum += n;
  cout << sum << endl;
  
  return 0;
}
