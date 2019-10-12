#include <iostream>
using namespace std;
 
int func(int x) {
  if(x%100 != 0) {
    return 0;
  }
  return func(x/100)+1;
}
 
int main(void) {
  int D, N;
  int cnt = 0;
  cin >> D >> N;
  for(int x=1;;x++) {
    if(func(x) == D) {
      cnt++;
      if(cnt == N) {
        cout << x << endl;
        return 0;
      }
    }
  }
  return 0;
}
#include <iostream>
using namespace std;

int func(int x) {
  if(x%100 != 0) {
    return 0;
  }
  return func(x/100)+1;
}

int main(void) {
  int D, N;
  int cnt = 0;
  cin >> D >> N;
  for(int x=1;;x++) {
    if(func(x) == D) {
      cnt++;
      if(cnt == N) {
        cout << x << endl;
        return 0;
      }
    }
  }
  return 0;
}
