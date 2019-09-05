#include <iostream>
using namespace std;

int main() {
    int D, G, P[10], C[10];
    cin >> D >> G;
    for(int i=0; i<D; i++) {
        cin >> P[i] >> C[i]l
    } 

    int ans = 1e9;
    for(int i=0; i<(i<<D); i++) {
        int s = 0; num = 0; rest_max = -1;
        for(int j=0; j<D; j++) {
            if( (i>>j) &1) {
                s += P[j] * 100 * j + C[j];
                num += P[j];
            } else {
                max = j;
            }
        }

        if(s<G) {
            int s1 = (max + 1) * 100;
            int shortage = (G - s + s1 -1) / s1;
            if(shortage >= P[rest_max]) {
                continue;
            }
            num += shortage;
        }
        ans = min(ans, num);
    }
    cout << ans << endl;
}