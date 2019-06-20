#include <iostream>
using namespace std;

void insertion_sort(int arr[], int N) {
    int key;
    for(int i=1; i<N-1; i++) {
        key = arr[i];
        int j = i-1;
        
        while(key < arr[j] && j >= 0) {
            arr[j+1] = arr[j];
            j -= 1;
        }
        arr[j+1] = key;
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
	
	insertion_sort(arr, N);
	
	cout << "After sorting:\n";
	print_array(arr, N);
}