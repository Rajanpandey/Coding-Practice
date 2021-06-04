class Solution {
public:
    bool isPowerOfThree(int n) {
        // raiseToPow = 19
        // maxPow3 = 1162261467 is 3^19,  3^20 (3486784401) is bigger than int  
        int raiseToPow = (int) (log(INT_MAX) / log(3));
        int maxPow3 = (int) pow(3, raiseToPow);

        return (n > 0 && (int) maxPow3 % n == 0);
    }
};
