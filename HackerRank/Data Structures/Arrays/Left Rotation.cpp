vector<int> rotLeft(vector<int> a, int d) {    
    int newLocation, N = a.size();
    vector<int> b(N);
    
    for(int i=0; i<N; i++){
        newLocation = (i + (N - d)) % N;
        b[newLocation] = a[i];
    }   
  
    return b;
}
