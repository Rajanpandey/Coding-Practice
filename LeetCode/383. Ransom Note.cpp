class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> magazineMap;
        for(auto ch : magazine) 
            ++magazineMap[ch];

        for(auto ch : ransomNote)
            if(--magazineMap[ch] < 0) return false;

        return true;
    }
};
