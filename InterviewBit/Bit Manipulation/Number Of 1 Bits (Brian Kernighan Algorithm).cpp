int Solution::numSetBits(unsigned int A) {
    int count = 0; 
    while (A) { 
        A &= (A-1); 
        count++; 
    } 
    return count;
}