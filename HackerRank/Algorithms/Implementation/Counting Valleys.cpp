int countingValleys(int n, string s) {
    int level = 0, count = 0;
    
    for(auto ch : s){
        if(ch == 'U') level++;
        else{
            if(level == 0) count++;
            level--;
        }        
    }
    
    return count;
}
