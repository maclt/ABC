#include <iostream>
using namespace std;

int main() {
    int N;
    long max, min, tmp;

    cin >> N;
    cin >> max;
    min = max;
    
    for (int i=1; i<N; i++) {
	    cin >> tmp;
	    if(tmp > max) {
	        max = tmp;
	    }
	    if(tmp < min) {
	        min = tmp;
	    }
    }

    cout << max-min << endl;

    return 0;
}


