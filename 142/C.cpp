#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
struct data {
  int order;
  int people;
};
 
bool cmp(const data &a, const data &b) {
  return a.people < b.people;
}
 
int main() {
  int N, tmp;
  cin >> N;
  
  vector<data> A(N);
  
  for(int i=0; i<N; i++) {
    cin >> tmp;
    A[i].order = i;
    A[i].people = tmp;
  }
  
  sort(A.begin(), A.end(), cmp);
  
  for(int i=0; i<N; i++) {
    cout << A[i].order + 1 << " ";
  }
  
  return 0;
}
