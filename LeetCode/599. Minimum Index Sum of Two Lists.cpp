class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> ans;
        map<string, int> myMap;
        int smallestIdx = INT_MAX;
        
        for (int i = 0; i < list1.size(); i++) {
            myMap[list1[i]] = i + 1;
        }     
        
        for (int i = 0; i < list2.size(); i++) {
            if (myMap[list2[i]]) {
                if (myMap[list2[i]] + i == smallestIdx) {
                    ans.push_back(list2[i]);
                } 
                else if (myMap[list2[i]] + i < smallestIdx) {
                    ans = {list2[i]};
                    smallestIdx = min(smallestIdx, myMap[list2[i]] + i);
                }
            }
        }
        
        return ans;
    }
};
