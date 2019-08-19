bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    sort(arrive.begin(), arrive.end());
    sort(depart.begin(), depart.end());
    
    for(int i=0; i<arrive.size(); i++) {
        if(i+K < arrive.size() && arrive[i+K] < depart[i]) {
            return 0;
        }
    }
    return 1;
}