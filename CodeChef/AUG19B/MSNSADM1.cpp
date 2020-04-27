#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T, N, x;
    cin >> T;
    
    while(T--) {
        int ans = 0;
        vector<int> score;
        vector<int> faults;
        
        cin >> N;
        for(int i=0; i<N; i++) {
            cin >> x;
            score.push_back(x);
        }
        
        for(int i=0; i<N; i++) {
            cin >> x;
            faults.push_back(x);
        }
        
        for(int i=0; i<N; i++) {
            ans = max(ans, 20*score[i] - 10*faults[i]);
            faults.push_back(x);
        }

        cout << ans << endl;
    }
}