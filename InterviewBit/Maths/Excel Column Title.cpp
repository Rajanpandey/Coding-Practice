string Solution::convertToTitle(int A) {
    string ans = "";
    while(A) {
        A--;
        ans = char(A%26 + 'A') + ans;
        A /= 26;
    }
    return ans;
}
