#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
 
int main() {
  bool order = true;
  
  deque<char> S;
  int Q;
  cin >> S;
  cin >> Q;
  
  int T = 0;
  int F = 0;
  char C;
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
      S.push_front(C);
    } else {
      S.push_back(C);
    }
  }
  
  if(order) {
    for(auto itr = v.begin(); itr != v.end(); ++itr) {
        cout << *itr;
    }
  } else {
    for(auto itr = v.rbegin(); itr != v.rend(); ++itr) {
        cout << *itr;
    }
  }
  
  return 0;
}
