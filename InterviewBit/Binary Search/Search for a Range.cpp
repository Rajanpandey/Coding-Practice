int binary_search(const vector<int> &arr, int element, bool searchFirst) { 
    int L = 0, R = arr.size()-1, result = -1;
    while (L <= R) { 
        int mid = L+(R-L)/2; 
        
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

vector<int> Solution::searchRange(const vector<int> &A, int B) {
    return {binary_search(A, B, true), binary_search(A, B, false)};
}
