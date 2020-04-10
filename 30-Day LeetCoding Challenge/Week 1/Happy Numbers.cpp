class Solution {
public:
    bool isHappy(int n) {
        // all numbers in [2, 6] are not happy
        while(n>6) { n = digitSquareSum(n); }
        return n == 1;
    }

    int digitSquareSum(int n) {
        int sum = 0;
        while(n) {
            sum += pow(n%10, 2);
            n /= 10;
        }
        return sum;
    }
};