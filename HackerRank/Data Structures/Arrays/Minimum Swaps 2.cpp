int minimumSwaps(vector<int> arr) {
    int ans = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == (i + 1)) {
            continue;
        }
        
        swap(arr[i], arr[arr[i] - 1]);
        ans++;
        i--;
    }

    return ans;
}
