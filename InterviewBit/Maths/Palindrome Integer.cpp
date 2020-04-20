int Solution::isPalindrome(int A) {
    int rev = 0, num = A;
    while(A > 0) {
        rev = A%10 + 10*rev;
        A = A/10;
    }
    return num == rev;
}
