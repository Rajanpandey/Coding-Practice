vector<int> Solution::flip(string A) {
    vector<int> arr(A.length());
    for(int i=0; i<A.length(); i++) {
        arr[i] = (A[i] == '1') ? -1 : 1;
    }

    pair<int, int> ans = make_pair(INT_MAX, INT_MAX);

    int best_till_now = 0, best_ending_here = 0, left = 0;
    for(int i=0; i<A.length(); i++) {
        if(best_ending_here+arr[i] < 0){
            left=i+1;
            best_ending_here=0;
        }else {
            best_ending_here+=arr[i];
        }
        if(best_ending_here > best_till_now){
            best_till_now = best_ending_here;
            ans.first = left;
            ans.second = i;
        }
    }

    if(ans.first==INT_MAX) {
        return {};
    }
    return {ans.first+1, ans.second+1};
}
