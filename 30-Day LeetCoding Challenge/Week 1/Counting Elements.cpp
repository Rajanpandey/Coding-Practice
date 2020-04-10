class Solution {
public:
    int countElements(vector<int>& arr) {
        int ans = 0;
        for(int i=0; i<arr.size(); i++) {
            if(arr.end() != find(arr.begin(), arr.end(), arr[i]+1)) { ans += 1; }
        }
        return ans;
    }
};