int Solution::majorityElement(const vector<int> &A) {
    int N = floor(A.size()/2);
    map<int, int> map1;
    
    for(int i=0; i<A.size(); i++) {
        map1[A[i]]++;
    }
    
    for(auto const& i:map1) {
        if(i.second > N) {
            return i.first;
        }
    }
}
