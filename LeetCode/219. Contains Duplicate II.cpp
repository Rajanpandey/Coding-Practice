class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> myMap;

        for (int i = 0; i < nums.size(); i++) {
            if (myMap[nums[i]] && i - myMap[nums[i]] < k) {
                return true;
            } else {
                myMap[nums[i]] = i + 1;
            }
        }

        return false;
    }
};

/*
TLE Solution:

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if (k == 0 || nums.size() == 1) return false;
        
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (j - i > k) break;
                if (nums[i] == nums[j]) return true;
            }
        }
        
        return false;
    }
};
/*
