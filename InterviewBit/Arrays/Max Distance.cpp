int Solution::maximumGap(const vector<int> &A) {
    vector<pair<int, int>> vec; 
    for(int i=0; i<A.size(); i++) {
        vec.push_back(make_pair(A[i], i));
    }
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    
    int ans = 0, maxIndex = vec[0].second;
    for(int i=1; i<vec.size(); i++) {
        ans = max(ans, maxIndex-vec[i].second);
        maxIndex = max(maxIndex, vec[i].second);
    }
    return ans;
}
