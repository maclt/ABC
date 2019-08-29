#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int n = 0;

    for(int i=0; i<4; i++) {
	if(str[i] == '+') {
	    n++;
	} else {
	    n--;
	}
    }

    cout << n << endl;
    return 0;
}
