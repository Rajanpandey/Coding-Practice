#include <bits/stdc++.h>
using namespace std;

main() {
    int T;
    
    cin >> T;
    while(T--) {
        int ans = 0;
        string S, C;
        map<int, int> mapC;
        
        cin >> S >> C;
        for(int i=0; i<C.length(); i++)
            mapC[C[i]] += 1;

        
        for(int i=0; i<=S.length()-C.length(); i++) {
            map<int, int> mapS;

            for(int j=0; j<C.length(); j++)
                mapS[S[i+j]] +=1;

            if(mapC == mapS) ans += 1;

        }
        
        cout << ans << endl;;
    }
}
