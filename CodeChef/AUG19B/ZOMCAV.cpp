#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, N, x;
    cin >> T;

    while(T--) {
        cin >> N;
        vector<int> radiationPower;
        vector<int> zombieHealth;
        
        for(int i=0; i<N; i++) {
            cin >> x;
            radiationPower.push_back(x);
        }

        for(int i=0; i<N; i++) {
            cin >> x;
            zombieHealth.push_back(x);
        }
        
        int dp[N];
        dp[0] = radiationPower[0];
        dp[N] = 0;
        for(int i=1; i<N; i++)
            dp[i] = radiationPower[i] - radiationPower[i-1];

        for(int i=0; i<N; i++) {
            int left = max(0, i-radiationPower[i]);
            int right = min(N-1, i+radiationPower[i]);

            dp[left] += 1;
            dp[right+1] -= 1;
        }

        vector<int> radiationLevel;
        radiationLevel.push_back(dp[0]); 
        radiationLevel.push_back(dp[1] + radiationLevel[0]);   
        for(int i=2; i<N; i++)
            radiationLevel.push_back(dp[i] + radiationLevel[i-1]);
        
        for(int i=0; i<N; i++)
            radiationPower[i] = radiationLevel[i] - radiationPower[i];
         
        sort(zombieHealth.begin(), zombieHealth.end());
        sort(radiationPower.begin(), radiationPower.end());
        
        cout << ((radiationPower == zombieHealth) ? "YES" : "NO") << endl;
    }
}