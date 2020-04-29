#include <bits/stdc++.h>
using namespace std;

int maxIndexDiff(int arr[], int N) {
    int maxDiff = -1;
    for(int i=0; i<N; i++) {
        for(int j=N-1; j>i; j--) {
            if(arr[i] <= arr[j]) maxDiff = max(maxDiff, j-i);
        }
    }
    return maxDiff;
}

main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        
        int arr[N];
        for(int i=0; i<N; i++) cin >> arr[i];
        
        cout << maxIndexDiff(arr, N) << endl;
    }
}
