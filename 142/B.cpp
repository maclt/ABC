#include <iostream>
using namespace std;
 
int main() {
  int N, K, tmp, num;
  cin >> N >> K;
  
  num = 0;
  for(int i=0; i<N; i++) {
    cin >> tmp;
    if(tmp>=K) {
      num++;
    }
  }
  cout << num << endl;
  return 0;
}
