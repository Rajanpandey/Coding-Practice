int Solution::strStr(const string A, const string B) {
    for(int i=0; i<A.length(); i++) {
        if(A.substr(i, B.length()) == B) {
            return i;
        }
    }
    return -1;
}

/*
Without using substr:
int Solution::strStr(const string A, const string B) {
    for(int i=0; ; i++) {
        for(int j=0; ; j++) {
            if(j == B.length()) { return i; }
            if(i+j == A.length()) { return -1; }
            if(A[i+j] != B[j]) { break; }
        }
    }
}
/*