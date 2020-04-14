class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        string ans = s;
        int rotation = 0;
        for(int i=0; i<shift.size(); i++) { rotation += shift[i][0] ? shift[i][1] : -shift[i][1]; }
        
        for(int i=0; i<s.length(); i++) {
            int newLocation = (i+abs(rotation))%s.length();
            rotation >= 0 ? ans[newLocation] = s[i] : ans[i] = s[newLocation];
        }   
        return ans;
    }
};
