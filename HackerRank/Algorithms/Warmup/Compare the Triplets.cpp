vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> c(2, 0);
    
    for(int i=0; i<3; i++){
        if(a[i] > b[i]) c[0]++;
        if(a[i] < b[i]) c[1]++;
    }

    return c;
}