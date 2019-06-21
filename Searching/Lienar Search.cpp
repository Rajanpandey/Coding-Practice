// Linear Search
// Time Complexity:    O(n)  θ(n)  Ω(1)
// Space Complexity:   O(1)

#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int element) { 
    for(int i = 0; i<n; i++) {
        if(arr[i]==element) {
            return i;
        }
    }
    return -1; 
} 

int main() {
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int N = sizeof(arr)/sizeof(arr[0]);
	int element = 5;
	
	int result = linear_search(arr, N, element); 
    result == -1 ? cout << "Element is not present in array" 
                 : cout << "Element is present at index " << result; 
}