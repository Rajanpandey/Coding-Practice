#include <iostream>
using namespace std;

void swap(int &x, int &y) {
    int temp = y;
    y = x;
    x = temp;
}

void selection_sort(int arr[], int N) {
    int min_index = 0;
    for(int i=0; i<N-1; i++) {
        min_index = i;
        for(int j=i+1; j<N; j++) {
            if(arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
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
	
	selection_sort(arr, N);
	
	cout << "After sorting:\n";
	print_array(arr, N);
}