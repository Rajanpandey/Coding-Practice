vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    map<string, vector<int>> myMap;
    vector<vector<int>> ans;

    for (int i = 0; i < A.size(); i++) {
        string temp = A[i];
        sort(temp.begin(), temp.end());
        myMap[temp].push_back(i + 1);
    }

    for (auto it : myMap) {
        ans.push_back(it.second);
    }
    
    return ans;
}
