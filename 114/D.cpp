#include <iostream>
#include <map>
using namespace std;

int main() {
  int N;
  map<int, int> A;
  cin >> N;
  
  for(int n=2; n<=N; n++) {
    int div = 2;
    int n_tmp = n;
    
    while(n>=div*div) {
      if(n_tmp%div==0) {
        A[div]++;
        n_tmp /= div;
      } else {
        div++;
      }
    }
  
    if(n_tmp!=1) {
      A[n_tmp]++;
    }
  }
  
  int over_75 = 0;
  int over_25 = 0;
  int over_15 = 0;
  int over_5 = 0;
  int over_3 = 0;
  
  for(auto a:A) {
    int num = a.second;
    if(num+1>=75) {
      over_75++;
    }
    if(num+1>=25) {
      over_25++;
    }
    if(num+1>=15) {
      over_15++;
    }
    if(num+1>=5) {
      over_5++;
    }
    if(num+1>=3) {
      over_3++;
    }
  }
    
  int ans = over_75;
  ans += over_25 * max(0, (over_3-1));
  ans += over_15 * max(0, (over_5-1));
  ans += over_5 * max(0, (over_5-1)) * max(0, (over_3-2)) / 2;
  
  cout << ans << endl;
  
  return 0;
}
