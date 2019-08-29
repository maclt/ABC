#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long N, M, a[100009][3], maxn =-(1LL << 60);

int main() {
  cin >> N >> M;
  for(int i=1; i<=N; i++) {
    for(int j=0; j<3; j++) {
      cin >> a[i][j];
    }
  }

  for(int i=0; i<8; i++) {
    vector<long long> vec;
    for(int j=1; j<=N; j++) {
      long long S = 0;
      for(int k=0; k<3; k++) {
        // 2^3通りの正負記号について
	// 例) i = 3
	// k = 0 の時 3/1 = 3 は2で割り切れず (-)
	// k = 1 の時 3/2 = 1 は2で割り切れず (-)
	// k = 2 の時 3/4 = 0 は2で割り切れる (+)
	if((i/(1<<k))%2==0) {
	  S += a[j][k];
	} else {
	  S -= a[j][k];
	}
      }
      vec.push_back(S);
    }
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    long long ans = 0;
    for(int j=0; j<M; j++) {
      ans += vec[j];
    }
    maxn = max(maxn, ans);
  }
  cout << maxn << endl;
  return 0;
}
