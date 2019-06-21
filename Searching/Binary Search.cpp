// Binary Search
// Time Complexity:    O(nlog(n))  θ(nlog(n))  Ω(1)
// Space Complexity:   O(1)

#include <iostream>
using namespace std;

int binary_search(int arr[], int L, int R, int element) { 
    if (L <= R) { 
        int mid = L+(R-L) / 2; 
        
        if (arr[mid] == element) {
            return mid;
        }
  
        if (arr[mid] > element) {
            return binary_search(arr, L, mid - 1, element); 
        }
        
        return binary_search(arr, mid + 1, R, element); 
    } 
    return -1; 
} 

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int N = sizeof(arr)/sizeof(arr[0]);
    int element = 5;
    
    int result = binary_search(arr, 0, N-1, element); 
    result == -1 ? cout << "Element is not present in array" 
                 : cout << "Element is present at index " << result; 
}