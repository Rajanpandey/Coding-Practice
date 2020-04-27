#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long T, N, K;
    cin >> T;

    while(T--) {
        cin >> N >> K;
        cout << (((N/K)%K) ? "YES" : "NO") << endl;
    }
}
