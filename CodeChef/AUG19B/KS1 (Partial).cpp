#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long T, N, x;
    cin >> T;
    while(T--) {
        vector<long long> vec;

        cin >> N;
        for(long long i=0; i<N; i++) {
            cin >> x;
            vec.push_back(x);
        }

        long long ans = 0;
        for(long long i=0; i<N-1; i++) {
            long long xorValue = vec[i];
            for(long long j=i+1; j<N; j++) {
                xorValue ^= vec[j];
                if(!xorValue) ans += j-i;
            }
        }
        
        cout << ans <<endl;
    }
}