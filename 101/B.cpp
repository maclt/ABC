#include <iostream>
using namespace std;

int main() {
    int N, M, ans, res;
    cin >> N;
    M = N;

    for(int i=0; i<=9; i++) {
        res = N%10;
	N = (N-res)/10;
	ans += res;
    }

    if(M%ans == 0) {
	cout << "Yes" << endl;
    } else {
	cout << "No" << endl;
    }
    return 0;
}
