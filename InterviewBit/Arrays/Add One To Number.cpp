vector<int> Solution::plusOne(vector<int> &A) {
    int carry = 1;
    for (int i = A.size() - 1; i >= 0; i--) {
        int sum = A[i] + carry;
        A[i] = sum % 10;
        if (sum < 10) {
            carry = 0;
            break;
        }
    }
    if (carry) {
        A.insert(A.begin(), 1);
    }
    while (A.front() == 0) {
        A.erase(A.begin());
    }
    return A;
}
