#include <iostream>
#include <map>
#include <vector>
using namespace std;
 
int main() {
  string S, T;
  cin >> S >> T;
  int s = 0;
  int t = 0;
  
  int len = S.size();
  vector<int> vS(len), vT(len);
  map<char,int> mS, mT;
  
  for(int i=0; i<S.size(); i++) {
    
    if(mS.find(S[i]) == mS.end()) {
      mS.insert(make_pair(S[i],s));  
      s++;
    }
    vS[i] = mS[S[i]];
    
    if(mT.find(T[i]) == mT.end()) {
      mT.insert(make_pair(T[i],t)); 
      t++;
    }
    vT[i] = mT[T[i]];
  }
  
  if(vS==vT) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
  return 0;
}
