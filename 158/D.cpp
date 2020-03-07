#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
 
int main() {
  bool order = true;
  
  deque<char> S;
  char s;
  int Q;
  cin >> s;
  cin >> Q;
  S.push_front(s);
  
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
    for(auto itr = S.begin(); itr != S.end(); ++itr) {
        cout << *itr;
    }
  } else {
    for(auto itr = S.rbegin(); itr != S.rend(); ++itr) {
        cout << *itr;
    }
  }
  
  return 0;
}
