#include <iostream>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  
  int X[N];
  int sum = 0;
  for(int i=0; i<N; i++) {
    cin >> X[i];
    sum += X[i];
  }
  
  int mean = sum / N;
  int power1 = 0;
  int power2 = 0;
  for(int j=0; j<N; j++) {
    power1 += (X[j] - mean) * (X[j] - mean);
    power2 += (X[j] - mean - 1) * (X[j] - mean - 1);
  }
  if(power1 < power2) {
    cout << power1 << endl;
  } else {
    cout << power2 << endl;
  }
  
  return 0;
}
