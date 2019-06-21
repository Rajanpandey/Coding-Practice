vector<int> Solution::sieve(int A) {
    vector<bool> isPrime(A+1, true);
    vector<int> ans;
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i=2; i<=A; i++) {
        for(int j=2; i*j<=A; j++) {
            isPrime[i*j] = false;
        }
    }
    for(int i=2; i<A; i++){
        if(isPrime[i]) ans.push_back(i);
    }
    return ans;
}
