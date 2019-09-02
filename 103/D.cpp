#include <iostream>
#include <algorithm>
#include <vector>
using  namespace std;
 
struct Set{
    int a, b;
};
 
bool up_a(const Set &x, const Set &y){
  return x.b < y.b;
}
 
int main() {
  int n, m, ans;
  cin >> n >> m;
  
  Set sets[m];
  vector<int> vec(1,0);
  
  for(int i=0; i<m; i++) {
    int a, b; 
    cin >> sets[i].a >> sets[i].b;
  }
  sort(sets, sets+m, up_a);
  
  ans = 0;
  for(int i=0; i<m; i++) {
    if(*max_element(vec.begin(), vec.end()) < sets[i].a) {
      vec.push_back(sets[i].b-1);
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}

/* Consuming too much time */

// #include <iostream>
// #include <set>
// #include <vector>
// using namespace std;

// int main() {
//   int N, M, tmp;
//   vector<int> A(2);
//   set<vector<int>> S;
  
//   cin >> N >> M;
  
//   for(int i=0; i<M; i++) {
//     cin >> A[0] >> A[1];
//     for(auto itr = S.begin(); itr != S.end(); itr++) {
//       vector<int> V(2);
//       V= *itr;
//       if(V[0]< A[0] || A[1] < V[1]) {
//         itr = S.erase(itr); 
//       }
//     }
//     S.insert(A);
//   }
    
//   cout << S.size() << endl;
//   return 0;
// }