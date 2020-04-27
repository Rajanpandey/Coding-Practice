#include<bits/stdc++.h>
using namespace std;

int search(int l, int r){ 
    int gap, reply, i;
    
    while(l < r) {
        gap = ((r-l)/10) ? (r-l)/10 : 1;
        
        for(i=1; i<=(r-l)/gap; i++){
            cout << "1 " << l + i*gap << endl;
            cin >> reply;
            
            if(reply) {
                cout << "2" << endl;
                break;
            }
        }
        
        if(l+i * gap <= r) r = l+i * gap-1;
        l += (i-1) *gap;
    }
    return l ? 1 : l+1;
} 

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, c, x, y, reply;
    int coins = 1000;
    
    cin >> N >> c;
    cout << "3 " << search(1, N); 
}