class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size(), write = n + count(arr.begin(), arr.end(), 0) - 1, i = n - 1;
        
        while (i >= 0 && write >= 0) {
            if (arr[i]) {
                if (write < n) arr[write] = arr[i];
            } 
            
            else {
                if (write < n) arr[write] = arr[i];
                write--;
                if (write < n) arr[write] = arr[i];
            }
            
            i--;
            write--;
        }
    }
};
