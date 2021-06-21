class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans = {0};

        for (int i = 1; i < n + 1; i++) {
            ans.push_back(ans[i >> 1] + (i & 1));
        }

        return ans;
    }
};

/*
Another solution:
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1);
        
        for (int i = 1; i < n + 1; i++) {
            ans[i] = ans[i & (i - 1)] + 1;
        }
        
        return ans;
    }
};
/*
