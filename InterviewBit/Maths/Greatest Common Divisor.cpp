int Solution::gcd(int A, int B) {
    while(A) {
        int temp = B;
        B = A;
        A = temp%A;;
    }
    return B;
}
