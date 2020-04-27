long repeatedString(string s, long n) {
    long ans = count(s.begin(), s.end(), 'a');
    ans *= n/s.size();
    
    int rem = n%s.size();
    if(rem) {
        for(int i=0; i<rem; i++){
            if(s[i] == 'a') ans++;
        }
    }
    
    return ans;
}
