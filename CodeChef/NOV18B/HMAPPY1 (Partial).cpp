#include <bits/stdc++.h> 
using namespace std;

void leftrotate(string &s, int d){ 
    reverse(s.begin(), s.begin()+d); 
    reverse(s.begin()+d, s.end()); 
    reverse(s.begin(), s.end()); 
} 
  
void rightrotate(string &s, int d){ 
   leftrotate(s, s.length()-d); 
} 

main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int N, Q, K, count = 0, ans = 0, rot = 0;
    char x, y;
    string str;
    map<int, string> map1;

    cin >> N >> Q >> K;
    
    
    for(int i=0; i<N; i++){
        cin >> x;
        str.insert(i, &x);
    }
    
    for(int i=0; i<N; i++){
        if(!i) map1[i]=str;
        else {
            rightrotate(str, 1);
            map1[i] = str;
        }
    }
    
    for(int i=0; i<Q; i++){
        cin >> y;
        if(y == '!'){
            rot += 1;
            rot %= N;
        } else {
            for(auto n : map1[rot]) {
                if(n == '1') {
                    count += 1;
                    ans = max(ans, count);
                    if(count > K) break;
                }
                if(n == '0') count = 0;
            }
            ans > K ? cout << K << endl : cout << ans << endl ;
            count = 0;
            ans = 0;
        }
    }
}