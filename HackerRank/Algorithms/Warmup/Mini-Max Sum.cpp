void miniMaxSum(vector<int> arr) {
    long small = *min_element(arr.begin(), arr.end());
    long large = *max_element(arr.begin(), arr.end());
    long sum = accumulate(arr.begin(), arr.end(), long(0)); 
    
    cout << sum-large << " " << sum-small;    
}
