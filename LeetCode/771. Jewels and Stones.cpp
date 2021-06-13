class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans = 0;
        unordered_set<char> setJ(jewels.begin(), jewels.end());

        for(char stone : stones) {
            if(setJ.count(stone)) {
                ans++;
            }
        }

        return ans;
    }
};


/*
Ruby solution:
def num_jewels_in_stones(j, s)
    s.count(j)
end
*/
