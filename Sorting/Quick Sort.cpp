// Quick Sort
// Time Complexity:    O(n^2)  θ(nlog(n))  Ω(nlog(n))
// Space Complexity:   O(n)

#include <iostream>
using namespace std;

void swap(int &x, int &y) {
    int temp = y;
    y = x;
    x = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low-1;
    
    for(int j=low; j<high; j++) {
        if(arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);  
    return (i+1);  
}

void quick_sort(int arr[], int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high);
        
        quick_sort(arr, low, pi-1);
        quick_sort(arr, pi+1, high);
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
	
	quick_sort(arr, 0, N-1);
	
	cout << "After sorting:\n";
	print_array(arr, N);
}