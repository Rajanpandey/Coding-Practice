#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    string S;
    
    cin >> T;
    while(T--) {
        int faceUp = 0, faceDown = 0;
        
        cin >> S;
        for(int i=0; i<S.length(); i++) {
            S[i] == '1' ? faceUp++ : faceDown++;
        }
        
        string ans = faceUp%2 != 0 && faceDown%2 != 0 || faceUp%2 != 0 && faceDown%2 == 0 ? "WIN" : "LOSE";
        cout << ans << endl;
    }
}
