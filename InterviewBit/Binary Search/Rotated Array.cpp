int binary_search(vector<int> arr, int N) { 
    int L = 0, R = N-1;
    while (L <= R) { 
        // Arr is already sorted
        if(arr[L] <= arr[R]) {
            return L;
        }
        
        int mid = (L+R)/2;
        int next = (mid+1)%N;
        int prev = (mid+N-1)%N;
        
        // Mid point is the smallest element
        if(arr[mid] <= arr[next] && arr[mid] <= arr[prev]) {
            return mid;
        } 
        
        // Mid point is at right side 
        else if(arr[mid] <= arr[R]) {
            R = mid-1;
        } 
        
        // Mid point is at the left side
        else if (arr[mid] >= arr[L]) {
            L = mid+1;
        }
    }
    return -1; 
} 

int Solution::findMin(const vector<int> &A) {
    int min_ele_index = binary_search(A, A.size());
    return A[min_ele_index];
}
