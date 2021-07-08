// Sliding Window Solution:
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> mySet;
        int fast = 0, slow = 0, n = s.size(), ans = 0;

        while (slow < n && fast < n) {
            if (mySet.find(s[fast]) != mySet.end()) {
                mySet.erase(s[slow]);
                slow++;
            } else {
                mySet.insert(s[fast]);
                ans = max(ans, fast - slow + 1);
                fast++;
            }
        }

        return ans;
    }
};

/*
Without Sliding Window:

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            int count = 0;
            vector<char> ch;
            int j = i;

            while ((find(ch.begin(), ch.end(), s[j]) == ch.end()) && j < s.length()) {
                ch.push_back(s[j]);
                count++;
                j++;
            }
            ans = max(ans, count);
            count = 0;
            ch.clear();
        }

        return ans;
    }
};

/*
