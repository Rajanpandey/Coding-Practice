string timeConversion(string s) {
    if(s[8] == 'P' && (s[0] != '1' || s[1] != '2')) {
        s[0] += 1;
        s[1] += 2;
    } 
    if(s[0] == '1' && s[1] =='2') {
        s[0] = '0';
        s[1] = '0';
    }

    return s.substr(0, 8);
}
