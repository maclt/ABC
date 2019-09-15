#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <queue>
 
using namespace std;
 
int main() {
  int N, M, tmp;
  cin >> N >> M;
  priority_queue<int> A;
  
  for (int i=0; i<N; i++) {
    cin >> tmp;
    A.push(tmp);
  }
  
  while(M>0) {
    tmp = A.top();
    A.pop();
    if(tmp==0) {break;}
    A.push(tmp/2);
    M--;
  }
 
  long long sum = 0;
  for(int i=0; i<N; i++) {
    sum += A.top();
    A.pop();
  }
  
  cout << sum << endl;
  
  return 0; 
}
