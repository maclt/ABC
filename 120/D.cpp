#include <iostream>
#include <vector>
using namespace std;
 
class UnionFind {
public:
  vector<long long> par;
  vector<long long> size;
  
  UnionFind(long long N) : par(N), size(N,1) {
    for(long long i=1; i<N; i++) {
      par[i] = i;
    }
  }
 
  long long root(long long x) {
    while(par[x] != x) {
      x = par[x];
    }
    return x;
  }
 
  void unite(long long x, long long y) {
    long long rx = root(x);
    long long ry = root(y);
    if(size[ry]<=size[rx]) {
      size[rx] += size[ry];
      par[ry] = rx;
    } else {
      size[ry] += size[rx];
      par[rx] = ry;
    }
  }
  
  bool same(long long x, long long y) {
    long long rx = root(x);
    long long ry = root(y);
    return rx == ry;
  }
  
  long long siz(long long x) {
    return size[root(x)];
  }
};
 
int main() {
  long long N, M;
  cin >> N >> M;
  
  vector<vector<long long>> stock(M, vector<long long>(2, 0));
  vector<long long> ans(M, 0);
  
  for(long long i=0; i<M; i++) {
    long long a, b;
    cin >> a >> b;
    stock[i][0] = a-1;
    stock[i][1] = b-1;
  }
  
  UnionFind uf(N);
  ans[M-1] = N*(N-1)/2;
  
  for(long long i=M-1; i>0; i--) {
    long long a = stock[i][0];
    long long b = stock[i][1];
    if(uf.same(a,b)) {
      ans[i-1] = ans[i];
    } else {
      ans[i-1] = ans[i] - uf.siz(a) * uf.siz(b);
      uf.unite(a,b);
    }
  }
  
  for(auto a:ans) {
    cout << a << endl;
  }
  
  return 0;
}
