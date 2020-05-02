class Solution {
public:
    bool canJump(vector<int>& A) {
        int reach = 0;
        for(int i=0; i<A.size(); i++){
            if(i <= reach) 
                reach = max(reach, i+A[i]);
            else
                break;
        }
        return reach >= A.size()-1;
    }
};
