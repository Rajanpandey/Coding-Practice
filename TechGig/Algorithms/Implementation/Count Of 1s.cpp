#include <bits/stdc++.h>
using namespace std;

main() {
    int N, x, count = 0;
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> x;
        if(x) count++; 
        else break;
    }
    cout << count;
}
