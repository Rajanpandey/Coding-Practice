class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string> > myMap;
        vector<vector<string> > ans;

        for (auto str : strs) {
            string temp = str;
            sort(str.begin(), str.end());

            myMap[str].push_back(temp);
        }

        for (auto it : myMap) {
            ans.push_back(it.second);
        }

        return ans;
    }
};
