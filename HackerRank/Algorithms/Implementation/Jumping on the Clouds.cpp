int jumpingOnClouds(vector<int> c) {
    int jump = 0;
    if(c.size() < 3) jump = 1;

    for(int i=0; i<c.size(); i++){
        if(c[i+2] == 0) i++;
        jump++;
    }
        
    return jump-1;
}
