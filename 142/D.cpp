#include <iostream>
#include <map>
using namespace std;
 
int main() {
  long long N1, N2;
  map<long long, long long> A;
  map<long long, long long> B;
  cin >> N1 >> N2;
  
  /* prior N1 */
  
  long long div = 2;
  long long N_tmp = N1;
    
  while(N1>=div*div) {
    if(N_tmp%div==0) {
      A[div]++;
      N_tmp /= div;
    } else {
      div++;
    }
  }
  
  if(N_tmp!=1) {
    A[N_tmp]++;
  }
  
  /* prior N2 */
  
  div = 2;
  N_tmp = N2;
    
  while(N2>=div*div) {
    if(N_tmp%div==0) {
      B[div]++;
      N_tmp /= div;
    } else {
      div++;
    }
  }
  
  if(N_tmp!=1) {
    B[N_tmp]++;
  }
  
  /* gcd */
  map<long long, long long> C;
  for(auto a:A) {
    long long tmp = a.first;
    if(B.find(tmp) != B.end()) {
      C[tmp] = min(a.second, B[tmp]);
    }
  }
  long long s = C.size();
  cout << s+1 << endl;
  
  return 0;
}
