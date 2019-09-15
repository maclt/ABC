#include <iostream>
using namespace std;
 
int main() {
  int N, tmp, cont;
  cin >> N;
  
  tmp = 0;
  for(int i=1; i<=9; i++) {
    cont = i*100 + i*10 + i;
    if(tmp<N && cont>=N) {
      cout << cont << endl;
      break;
    } else {
      tmp = cont;
    }
  }
  
  return 0;
}
