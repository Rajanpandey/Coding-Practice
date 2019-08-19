int idBucket(int ele, int gap, int minEle){
    return ((ele - minEle) / (gap + 1));
}

int Solution::maximumGap(const vector<int> &A) {
    int minEle = *min_element(A.begin(), A.end());
    int maxEle = *max_element(A.begin(), A.end());
    int gap = (maxEle - minEle) / A.size();
    int len = idBucket(maxEle, gap, minEle) + 1;
    vector<int> maxElements(len, INT_MIN);
    vector<int> minElements(len, INT_MAX);
    
    for(int i=0; i<A.size(); i++) {
        int id = idBucket(A[i], gap, minEle);
        maxElements[id] = max(maxElements[id], A[i]);
        minElements[id] = min(minElements[id], A[i]);
    }
    
    int maxGap = 0;
    int i = 0, j = 1;
    while(j < len) {
        while(minElements[j] == INT_MAX) {
            j++;
        }
        maxGap = max(maxGap, minElements[j] - maxElements[i]);
        i = j; 
        j++;
    }
    return maxGap;
}
