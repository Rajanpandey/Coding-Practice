class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int ans = 0;
        unordered_set<char> setJ(J.begin(), J.end());
        for(char ch : S)
            if(setJ.count(ch)) 
                ans++;
        return ans;
    }
};


/*
Ruby solution:
def num_jewels_in_stones(j, s)
    s.count(j)
end
*/