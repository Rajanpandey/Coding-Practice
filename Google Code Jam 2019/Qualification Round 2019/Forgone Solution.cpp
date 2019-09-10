#include<bits/stdc++.h>
using namespace std;

main () {
    int T;
    cin >> T;
    for(int k=1; k<=T; k++) {
        string N;
        string ans = "";
        
        cin >> N;
        for(int i=0; i<N.size(); i++) {
            if(N[i] == '4') {
                N[i] = '3';
                ans += '1';
            } else {
                ans += '0';
            }
        }
        cout << "case #" << k << ": " << N << " " << stoi(ans) << endl;
    }
}