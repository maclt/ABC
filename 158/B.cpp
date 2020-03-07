#include <iostream>
using namespace std;
 
int main() {
  long long A, B, N;
  cin >> N >> A >> B;
  
  long long sumA = 0;
  
  long long div = N / (A+B);
  long long res = N % (A+B);
  
  if(res<=A) {
    sumA = A * div + res;
  } else {
    sumA = A * (div+1);
  }
  
  cout << sumA;
  
  return 0;
}
