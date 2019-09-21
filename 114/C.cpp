#include <iostream>
using namespace std;
 
long long N;
 
bool is_valid(int n) {
  bool is_3 = false;
  bool is_5 = false;
  bool is_7 = false;
  
  while(n!=0) {
    int res = n % 10;
    if(res==3) {
      is_3 = true;
    } else if(res==5) {
      is_5 = true;
    } else if(res==7) {
      is_7 = true;
    }
    if(is_3==true && is_5==true && is_7==true) {
      return true;
    }
    n /= 10;
  }
  
  return false;
}
 
long long func(long long n) {  
  if(n>N) {
    return 0;
  }
   
  int res = 0;
  if (is_valid(n)) {
    res = 1;
  }
  
  res += func(n*10+3);
  res += func(n*10+5);
  res += func(n*10+7);
 
  return res;
}
 
int main (){
  cin >> N;
  
  cout << func(0) << endl;  
  return 0;
}

/* another solution

#include <iostream>
using namespace std;
 
long long N;
 
int func(long long n, bool has_3, bool has_5, bool has_7) {
  if(n>N) {
    return 0;
  }
  
  int res = 0;
  if (has_3==true && has_5==true && has_7==true) {
    res += 1;
  }
  
  res += func(n*10+3, true, has_5, has_7);
  res += func(n*10+5, has_3, true, has_7);
  res += func(n*10+7, has_3, has_5, true);
 
  return res;
}
 
int main (){
  cin >> N;
  
  cout << func(0, false, false, false) << endl;
  
  return 0;
}
*/
