#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *a[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;

    long long requirements[N], quantity[N], ans = LLONG_MAX; 
       
    for(int i=0; i<N; i++) cin >> requirements[i]; 
    for(int i=0; i<N; i++) cin >> quantity[i]; 
        
    for(int i=0; i<N; i++) ans = min(ans, quantity[i]/requirements[i]); 

    cout << ans << endl;
}
