#include <bits/stdc++.h>
using namespace std;

main() {
    int m, d, ans;

    cin >> m >> d;
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) 
        ans = (d == 6 || d == 7) ? 6 : 5;
    
    else if(m == 4 || m == 6 || m == 9 || m == 11) 
        ans = (d == 7) ? 6 : 5;
    
    else 
        ans = (d == 1) ? 4 : 5;

    cout << ans;
}
