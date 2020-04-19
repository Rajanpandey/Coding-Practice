int Solution::firstMissingPositive(vector<int> &A) {
    int missing = 1;
    sort(A.begin(), A.end());
    
    for(auto num : A) {
        if(num < 1) { continue; }
            
        if(num == missing) {
            missing += 1;
            continue;
        }
        
        break;
    }
    
    return missing;
}
