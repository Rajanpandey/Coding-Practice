string Solution::findDigitsInBinary(int A) {
    string ans = "";
    if(A == 0) { return "0"; }
    while(A > 0) {
        ans += (char)('0' + A % 2);
        A /= 2;
    }
    reverse(ans.begin(), ans.end()); 
    return ans;
}
