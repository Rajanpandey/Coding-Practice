#include <bits/stdc++.h> 
using namespace std;

main() {
    int T;
    cin >> T;
    
    while(T--) {
        int N, x = 0;
        cin >> N;
        
        for(int i=0; i<N; i++){
            x = (i%2 == 0) ? (x*2)+1 : (x*2)-1;
    
        cout << fixed << x << " " << setprecision(0) << pow(2, N) << " ";
    }
}