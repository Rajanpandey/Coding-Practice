vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int repeat = 0, missing = 0;
    long long N = A.size();
    
    long long sum = (N * (N+1)) / 2;
    long long sumSq = (N * (N+1) * (2*N+1)) / 6;
    
    for(auto num : A) {
        sum -= (long long)num;
        sumSq -= (long long)num * (long long)num;
    }
    
    missing = (sum + sumSq/sum) / 2;
    repeat = missing - sum;
    return {repeat, missing};
}
