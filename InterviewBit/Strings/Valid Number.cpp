int Solution::isNumber(const string A) {
    string str = "";
    int startWhiteSpaces = 1;
    for(int i=0; i<A.size(); i++) {
        if(!isspace(A[i])) {
            startWhiteSpaces = 0;
        }
        if(startWhiteSpaces == 0) {
            str += A[i];
        }
    }

    int N = str.size()-1;    
    while(N >= 0 && isspace(str[N])) {
        --N;
    }
    str = str.substr(0, N+1);
    N = str.size();
    
    if(!isdigit(str[0]) && str[0] != '.' && str[0] != '-' || !isdigit(str[N-1])) {
        return false;
    }
        
    int i = 1;
    bool exponential = false, decimal = false;
    while(i<N) {
        if(!isdigit(str[i]) && str[i] != 'e' && str[i] != '.' && str[i] != '-') {
            return false;
        }
        else if(str[i] == '-'&& str[i-1] != 'e') {
            return false;
        }
        else if(str[i] == 'e') {
            if(exponential) {
                return false;
            }
            exponential = true;;
        }
        else if(str[i] == '.') {
            if(decimal || exponential) {
                return false;
            }
            decimal = true;
            if(i+1 < N && (!isdigit(str[i+1]))) {
                return false;
            }
        }
        i++;
    }
    return true;
}
