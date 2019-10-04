#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, A, B, C;
vector<int> V(8);

int calc_mp(int num, int a, int b, int c) {  
  if(num == 8) {
    if(a>0&&b>0&&c>0) {
      int mp = abs(a-A) + abs(b-B) + abs(c-C) - 30;
      return mp;
    } else {
      return 1e9;
    }
  }
  
  int mp1 = calc_mp(num+1, a, b, c);
  int mp2 = calc_mp(num+1, a+V[num], b, c) + 10;
  int mp3 = calc_mp(num+1, a, b+V[num], c) + 10;
  int mp4 = calc_mp(num+1, a, b, c+V[num]) + 10;
  
  return min({mp1, mp2, mp3, mp4});
  
}

int main() {
  cin >> N >> A >> B >> C;
  
  for(int i=0; i<N; i++) {
    cin >> V[i];
  }
    
  int ans = calc_mp(0, 0, 0, 0);
  cout << ans << endl;
  
  return 0;
}
