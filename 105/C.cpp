#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> detectOrder(int n) {
  int i;
  long m, res;
  m = 0;
  vector<int> v(2);
  
  if(n < 0) {
    i = 1;
    while(true) {
      res = -2*pow(2,(i-1));
      m += res;
      if(m <= n) {break;}
      i += 2;
    }
  } else if(n > 0) {
    i = 0;
    while(true) {
      res = pow(2,i);
      m += res;
      if(m >= n) {break;}
      i += 2;
    }
  }
  
  v[0] = i;
  v[1] = res;
  return v;
}

int main() {
  int N, tmp;
  string s = "";
  vector<int> v(2);
  
  cin >> N;
  if(N==0) {
    cout << 0 << endl;
    return 0;
  }
  tmp=-1;
  while(N!=0) {
    v = detectOrder(N);
    for(int i=0; i<tmp-v[0]-1; i++) {s+='0';}
    s += '1';
    tmp = v[0];
    N -= v[1];
  }
  for(int i=0; i<tmp; i++) {s+='0';}

  cout << s << endl;
  return 0;
}