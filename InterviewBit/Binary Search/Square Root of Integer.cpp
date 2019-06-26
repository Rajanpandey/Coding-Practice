int binary_search(int A, int start, int end){
    int mid = floor(start+(end-start)/2);
    
    if(start <= end){
        if(mid <= (A/mid) && (mid+1) > (A/(mid+1))){
            return mid;
        }
        else if(mid < (A/mid)) {
            start = mid+1;
            return binary_search(A, mid+1, end);
        }
        return binary_search(A, start, mid-1);
    }
    return mid;
}

int Solution::sqrt(int A) {
    if(A == 0){
        return 0;
    }
    else if(A == 1){
        return 1;
    }
    else{
        return binary_search(A, 0, A);
    }
}
