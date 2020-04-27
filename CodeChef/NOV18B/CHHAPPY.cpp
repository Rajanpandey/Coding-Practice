#include<bits/stdc++.h>
using namespace std;

main() {
    int T;
    cin >> T;

    while(T--) {
        int N, x, ans;
        map<int, vector<int>> map1;
        map<int, int> map2;
        vector<int> vec;

        cin >> N;
        for(int i=0; i<N; i++){
            cin >> x;
            
            map1[x].push_back(i+1);
            map2[x] += 1;
            if(map2[x] == 2) vec.push_back(x);
        }
        
        for(int i=0; i<vec.size(); i++){
            for(int k=0; k<map1[vec[i]].size(); k++){
                if(map2[map1[vec[i]][k]]) ans += 1;
                if(ans > 1) goto end;
            }
            ans = 0;
        }
        
        end:
        ans > 1 ? cout << "Truly Happy\n" : cout << "Poor Chef\n";
    }
}