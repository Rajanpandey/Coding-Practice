vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    unordered_map<string, vector<int>> myMap;
    vector<vector<int>> ans;
    
    for(int i=0; i<A.size(); i++) {
        string temp = A[i];
        sort(temp.begin(), temp.end());
        myMap[temp].push_back(i+1);
    }
    
    auto it = myMap.begin();
    while(it != myMap.end()){
        ans.push_back(it->second);
        it++;
    }
    
    return ans;
}
