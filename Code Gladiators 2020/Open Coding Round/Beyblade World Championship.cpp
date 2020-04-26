#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *a[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;

    while(T--) {
        int N, ans = 0, j = 0;

        cin >> N;
        long long GRevolution[N], Opponents[N];   
        for(int i=0; i<N; i++) cin >> GRevolution[i]; 
        for(int i=0; i<N; i++) cin >> Opponents[i]; 

        sort(GRevolution, GRevolution+N);
        sort(Opponents, Opponents+N);
        
        for(int i=0; i<N; i++) {
            if(GRevolution[i] <= Opponents[j]) continue;
            ans += 1;
            j += 1;
        }
        cout << ans << endl;
    }
}
