vector<int> Solution::primesum(int N) {
    vector<bool> isPrime(N+1, true);
    isPrime[0] = false, isPrime[1] = false;
    
    for(int i=2; i<=N; i++) {
        if(i > N/i) { break; }
        for(int j=i*i; j<=N; j+=i) {
            isPrime[j] = false;
        }
    }
    
    for(int i=2; i<=N; ++i) {
        if(isPrime[i] && isPrime[N-i]) { return {i, N-i}; }
    } 
    
    return {};
}
