int binary_search(vector<int> arr, int N, int element, bool searchFirst) { 
    int L = 0, R = N-1, result = -1;
    while (L <= R) { 
        int mid = (L+R)/2; 
        
        if (arr[mid] == element) {
            result = mid;
            if(searchFirst) {
                R = mid-1;
            } else {
                L = mid+1;
            }
        } else if (arr[mid] > element) {
            R = mid-1;
        } else {
            L = mid+1; 
        }
    }
    return result; 
} 

int Solution::findCount(const vector<int> &A, int B) {
    int firstIndex = binary_search(A, A.size(), B, true);
    if(firstIndex == -1) {
        return 0;
    } else {
        int lastIndex = binary_search(A, A.size(), B, false);
        return lastIndex - firstIndex + 1;
    }
}
