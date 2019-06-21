// Merge Sort
// Time Complexity:    O(nlog(n))  θ(nlog(n))  Ω(nlog(n))
// Space Complexity:   O(n)

#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {
    int i, j, k; 
    int n1 = m-l+1; 
    int n2 = r-m; 
  
    // create temp arrays and Copy data to temp arrays L[] and R[]
    int L[n1], R[n2]; 
    for(i=0; i<n1; i++) {
        L[i] = arr[l+i]; 
    }
    for(j=0; j<n2; j++) {
        R[j] = arr[m+1+j]; 
    }
  
    // Merge the temp arrays back into arr[l..r]
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while(i<n1 && j<n2) { 
        if(L[i] <= R[j]) { 
            arr[k] = L[i]; 
            i++;
        } else { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    // Copy the remaining elements of L[], if there are any 
    while (i < n1) { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    // Copy the remaining elements of R[], if there are any 
    while (j < n2) { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
}

void merge_sort(int arr[], int l, int r) {
    if(l < r) {
        int m = l+(r-l)/2;
        
        merge_sort(arr, l, m);
        merge_sort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

void print_array(int arr[], int N) {
    for(int i=0; i<N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
	int arr[] = {2,4,1,7,8};
	int N = sizeof(arr)/sizeof(arr[0]);
	
	cout << "Before sorting:\n";
	print_array(arr, N);
	
	merge_sort(arr, 0, N-1);
	
	cout << "After sorting:\n";
	print_array(arr, N);
}