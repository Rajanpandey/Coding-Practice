#include<bits/stdc++.h>
using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M, u, v;
    int count = 0;
    string str;
    vector<int> vec;
    map<int, vector<int>> map1;
    map<int, int> map2;
    
    cin >> N >> M;
    for(int i=0; i<M; i++){
        cin >> u >> v;
        map2[u] += 1;
        map1[v].push_back(u);
    }
    
    for(int i=1; i<N+1; i++)
        if(!map2[i]) vec.push_back(i);
    
    while(vec.size()) {
        if(vec.size()>=2){
            str.append("2 ");
            str.append(to_string(vec[0]));
            str.append(" ");
            str.append(to_string(vec[1]));
            str.append("\n");
            
            for(int i=0; i<map1[vec[0]].size(); i++){
                map2[map1[vec[0]][i]]--;
                if(!map2[map1[vec[0]][i]]) vec.push_back(map1[vec[0]][i]);
            }

            for(int i=0; i<map1[vec[1]].size(); i++){
                map2[map1[vec[1]][i]]--;
                if(!map2[map1[vec[1]][i]]) vec.push_back(map1[vec[1]][i]);
            }
            
            vec.erase(vec.begin(), vec.begin()+2);
            count++;
        } 
        else {
            str.append("1 ");
            str.append(to_string(vec[0]));
            str.append("\n");
            
            for(int i=0; i<map1[vec[0]].size(); i++){
                map2[map1[vec[0]][i]]--;
                if(!map2[map1[vec[0]][i]]) vec.push_back(map1[vec[0]][i]);
            }
            
            vec.erase(vec.begin(), vec.begin()+1);
            count++;
        }
    }
    
    cout << count << endl;
    cout << str;
}