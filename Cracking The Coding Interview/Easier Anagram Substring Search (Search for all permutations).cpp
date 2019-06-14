#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	
	cin >> T;
	while(T--) {
	    int ans = 0;
	    string S, C;
	    
	    cin >> S >> C;
	    sort(C.begin(), C.end());
	    
	    for(int i=0; i<=S.size()-C.size(); i++) {
            string sb = S.substr(i, C.size());
            sort(sb.begin(), sb.end());
            if((sb)==(C)) {
                ans++;
            }
        }
	    cout << ans << endl;
	}
	return 0;
}
