#include <iostream>
using namespace std;
 
int func(int x) {
  if(x%2 != 0) {
    return 0;
  }
  return func(x/2) + 1;
}
int main(void) {
  int N;
  cin >> N;
  int ans = 0;
  for(int i=0; i<N; i++) {
    int a;
    cin >> a;
    ans += func(a);
  }
  cout << ans << endl;
  return 0;
}
