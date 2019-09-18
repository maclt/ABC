#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct city {
  int order;
  int pref;
  int year;
  int yearord;
};

bool cmp1(const city &a, const city &b) {
  if(a.pref < b.pref) {
    return true;
  } else if (a.pref > b.pref){
    return false;
  } else {
    return a.year < b.year;
  }
}

bool cmp2(const city &a, const city &b) {
  return a.order < b.order;
}

int main() {
  int N, M, P, Y;
  
  cin >> N >> M;
  vector<city> A(M);
  
  for(int i=0; i<M; i++) {
    cin >> P >> Y;
    A[i].order = i;
    A[i].pref = P;
    A[i].year = Y;
  }
  
  sort(A.begin(), A.end(), cmp1);
  
  int j = 1;
  int i = 1;
  for(city &a:A) {
    while(a.pref!=i) {
      i++;
      j = 1;
    }    
    if(a.pref==i) {
      a.yearord = j;
      j++;
    }
  }
  
  sort(A.begin(), A.end(), cmp2);
  
  for(city a:A) {
    string pref_S = to_string(a.pref);
    string year_S = to_string(a.yearord);
    
    while(pref_S.size()<6) {
      pref_S = '0' + pref_S;
    }
    while(year_S.size()<6) {
      year_S = '0' + year_S;
    }
    
    cout << pref_S << year_S << endl;
  }
   
  return 0;
}
