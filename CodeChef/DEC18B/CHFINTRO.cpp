#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, r, R;
    cin >> N >> r;

    for(int i=0; i<N; i++){
        cin >> R;
        cout << ((R >= r) ? "Good boi" : "Bad boi") << endl;
    }
}
