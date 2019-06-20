#include <iostream>
using namespace std;

void swap(int &x, int &y) {
    int temp = y;
    y = x;
    x = temp;
}

void bubble_sort(int arr[], int N) {
    for(int i=0; i<N-1; i++) {
        for(int j=0; j<N-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
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
	
	bubble_sort(arr, N);
	
	cout << "After sorting:\n";
	print_array(arr, N);
}