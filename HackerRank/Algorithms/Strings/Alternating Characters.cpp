int alternatingCharacters(string s) {
    int count = 0;
 
    for(int i=0; i<s.length(); i++)
        if(s[i] == s[i+1]) ++count;
    
    return count;
}
