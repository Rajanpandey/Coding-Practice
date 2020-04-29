#include <bits/stdc++.h>
using namespace std;

void subArraySum(int arr[], int N, int S) {
    for(int i=0; i<N; i++) {  
        int curr_sum = arr[i];  
  
        for(int j=i+1; j<=N; j++) {  
            if(curr_sum == S) {  
                cout << i+1 << " " << j << endl;  
                return;  
            }  
            if(curr_sum > S || j == N)  
                break;  
            curr_sum = curr_sum + arr[j];
        }  
    }  
  
    cout << "-1" << endl;
}

main() {
    int T;
    cin >> T;
    while(T--) {
        int N, S;
        cin >> N >> S;
        
        int arr[N];
        for(int i=0; i<N; i++) cin >> arr[i];
        
        subArraySum(arr, N, S);
    }
}
