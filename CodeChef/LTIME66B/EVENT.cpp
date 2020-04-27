#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;

    while(T--) {
        vector<string> vec = {"NULL", "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};
        int L, R, first, second;
        string S, E;

        cin >> S >> E >> L >> R;
        for(int i=0; i<vec.size(); i++){
            if(vec[i] == S){
                first = i;
                for(int k=i; k<vec.size(); k++){
                    if(vec[k] == E){
                        second = k;
                        goto end;
                    }
                }
            }
        }
        
        end:
        int jump = (second-first) + 1;
        
        while(jump < L) jump += 7;
        
        if(L <= jump && jump <= R) {
            if(R < jump+7) cout << jump << endl;
            else cout << "many" << endl;
        }
        else cout << "impossible" << endl;
    }
}