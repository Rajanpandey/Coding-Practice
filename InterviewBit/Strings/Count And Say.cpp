string Solution::countAndSay(int A) {
    string str = "11";
    int count = 1;
    stringstream ss;
    
    if(A == 1) {
        return "1";
    }
    
    while(A != 2) {
        count = 1;
        for(int i=0; i<str.size(); i++) {
            if(i+1 != str.size()) {
                if(str[i] == str[i+1]) {
                    count++;
                }
                else {
                    ss << count << str[i];
                    count = 1;
                }
            }
            else {
                ss << count << str[i];
            }
        }
        str = ss.str();
        ss.str("");
        A--;
    }
    
    return str;
}
