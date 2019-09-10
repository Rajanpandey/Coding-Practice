#include<bits/stdc++.h>
using namespace std;

main () {
    int T;
    cin >> T;
    for(int k=1; k<=T; k++) {
        int N;
        string P;

        cin >> N;
        cin >> P;
        
        cout << "case #" << k << ": ";
        for(int i=0; i<P.size(); i++) {
            cout << (P[i] == 'S' ? 'E' : 'S');
        }
        cout << endl;
    }
}
