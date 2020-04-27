int sockMerchant(int n, vector<int> ar) {
    int pairs = 0;
    sort(ar.begin(), ar.end());
        
    for(int i=0; i<b.size(); i++) {
        if(ar[i] == ar[i+1]) {
            pairs++;
            i++;
        }
    }
    
    return pairs;
}
