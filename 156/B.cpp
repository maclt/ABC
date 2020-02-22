#include <iostream>
using namespace std;
 
int main() {
  int N, K;
  int rank = 0;
  cin >> N >> K;
  while(N > 0) {
    N = N/K;
    rank++;
  }
  cout << rank;
}
