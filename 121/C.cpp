#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct store {
  long long price;
  long long quantity;
};

bool cmp(const store &a, const store &b) {
  return a.price < b.price;
}

int main() {
  long long N, M;
  cin >> N >> M;
  
  vector<store> A(N);
  for(int i=0; i<N; i++) {
    cin >> A[i].price;
    cin >> A[i].quantity;
  }
  
  sort(A.begin(), A.end(), cmp);
  
  long long num = 0;
  long long total = 0;
  for(int i=0; i<N; i++) {
    if(A[i].quantity <= M) {
      num += A[i].quantity;
      total += A[i].price * A[i].quantity;
      M -= A[i].quantity;
    } else {
      total += A[i].price * M;
      break;
    }
  }
  
  cout << total << endl;
  
  return 0;
}

