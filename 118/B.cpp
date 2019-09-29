#include <iostream>
#include <map>
using namespace std;
 
int main() {
  int N, M;
  cin >> N >> M;
  
  map<int, int> Map;
  
  /* iさんがK個の料理を好き */
  for(int i=0; i<N; i++)  {
    int K;
    cin >> K;
    for(int k=0; k<K; k++) {
      int tmp;
      cin >> tmp;
      Map[tmp]++;
    }
  }
  
  int num = 0;
  for(auto m:Map) {
    if(m.second == N) {
      num++;
    }
  }
  
  cout << num << endl;
  
  return 0;
}
