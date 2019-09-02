#include <iostream>
using namespace std;

int main() {
  int N, tmp, sum;
  cin >> N;
  
  for(int i=0; i<N; i++) {
    cin >> tmp;
    sum += tmp;
  }
  
  cout << sum-N << endl;
  return 0;
}