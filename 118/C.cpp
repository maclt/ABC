#include <iostream>
#include <set>
using namespace std;
 
int euc(int a, int b) {
  if(a < b) {
    return euc(b, a);
  }
  
  int r;
  while ((r=a%b)) {
    a = b;
    b = r;
  }
  return b;
}
 
int main() {
  int N;
  cin >> N;
  set<int> A, B;
  
  for(int i=0; i<N; i++) {
    int tmp;
    cin >> tmp;
    A.insert(tmp);
  }
  
  int gcd = *A.begin();
  for(auto a:A) {
    gcd = euc(a, gcd);
  }
  
  cout << gcd << endl;
  
  return 0;
}
