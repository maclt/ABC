#include <iostream>
#include <unordered_map>
using namespace std;
 
int main() {
  int N, M, tmp, mod;
  long long res, value;
  unordered_map<int,int> MOD;
  MOD[0] = 1;
  
  cin >> N >> M;
  mod = 0;
  for(int i=0; i<N; i++) {
    cin >> tmp;
    mod += tmp;
    mod %= M;
    auto itr = MOD.find(mod); 
    if( itr != MOD.end() ) {
      MOD[mod] += 1;
    } else {
      MOD[mod] = 1;
    }
  }
  
  res = 0;
  for (auto itr = MOD.begin(); itr != MOD.end(); ++itr){
    value = itr->second;
    res += value*(value-1)/2;
  }
  
  cout << res << endl;
  return 0;
}
