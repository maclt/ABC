#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
  int N, n;
  vector<vector<int>> A(N, vector<int>(N-1));
  vector<int> B(N, 0);
  vector<int> B_tmp(N, 0);
  set<int> C;
  
  for(int i=0; i<N; i++) {
    for(int j=0; j<N-1; j++) {
      cin >> A.at(i).at(j);
    }
  }
  
  n = 0;
  for(int l=0; l<N*(N-1); l++) {
    for(int i=0; i<N; i++) {
      for(int j=i+1; j<N; j++) {
        if( A.at(i).at(B.at(i)) == j && A.at(j).at(B.at(j)) == i) {
          C.insert(i);
          C.insert(j);
        }
      }
    }
    n++;
    for(auto itr = C.begin(); itr != C.end(); ++itr) {
      B.at(*itr) = B.at(*itr) + 1;
    }
    if(B_tmp == B) {
      n = -1;
      break;
    } else if(count(B.begin(), B.end(), N-1) == N) {
      break;
    }
    B_tmp = B;
  }
  
  cout << n << endl;
  return 0;
}