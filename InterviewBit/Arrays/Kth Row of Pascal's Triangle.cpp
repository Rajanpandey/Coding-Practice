vector<int> Solution::getRow(int A) {
    vector<int> ans;    
    int N = 1;
    for(int i=0; i<=A ; i++){
        ans.push_back(N);
        N = N * (A-i)/(i+1);
    }
    return ans;
}
