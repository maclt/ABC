#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
 
int main() {
  bool order = true;
  
  string S;
  int Q;
  cin >> S >> Q;
  
  int T = 0;
  int F = 0;
  char C;
  deque<char> L;
  deque<char> R;
  
  for(int i=0; i<Q; i++) {
    cin >> T;
    // Ti = 1の時
    if(T==1) {
      order = !order;
      continue;
    }
    // Ti = 2の時
    cin >> F >> C;
    if((F==1 && order==true) || (F==2 && order==false)) {
      L.push_front(C);
    } else {
      R.push_back(C);
    }
  }
  
  if(order) {
    for(auto itr = L.begin(); itr != L.end(); ++itr) {
        cout << *itr;
    }
    for(auto itr = S.begin(); itr != S.end(); ++itr) {
        cout << *itr;
    }
    for(auto itr = R.begin(); itr != R.end(); ++itr) {
        cout << *itr;
    }
  } else {
    for(auto itr = R.rbegin(); itr != R.rend(); ++itr) {
        cout << *itr;
    }
    for(auto itr = S.rbegin(); itr != S.rend(); ++itr) {
        cout << *itr;
    }
    for(auto itr = L.rbegin(); itr != L.rend(); ++itr) {
        cout << *itr;
    }
  }
  
  return 0;
}
