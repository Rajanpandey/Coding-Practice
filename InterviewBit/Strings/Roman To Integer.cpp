int Solution::romanToInt(string A) {
    int ans = 0, curr = 0, next = 0;
    
    map<char, int> romanValue;
    romanValue['I'] = 1;
    romanValue['V'] = 5;
    romanValue['X'] = 10;
    romanValue['L'] = 50;
    romanValue['C'] = 100;
    romanValue['D'] = 500;
    romanValue['M'] = 1000;
    
    
    if(A.size() == 1) {
        return romanValue[A[0]];
    }
    
    for(int i=0; i<A.length()-1; i++) {
        curr = romanValue[A[i]];
        next = romanValue[A[i+1]];
        
        if(next > curr) {
            ans -= curr;
        } else {
            ans += curr;
        }
    }
    ans += next;
    return ans;
}
