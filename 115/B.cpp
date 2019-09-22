include <iostream>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  
  int tmp = 0;
  int sum = 0;
  int max = 0;
  for(int i=0; i<N; i++) {
    cin >> tmp;
    sum += tmp;
    if(tmp>max) {
      max = tmp;
    }
  }
  
  sum = sum - max/2;
  
  cout << sum << endl;
  
  return 0;
}
