int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    int total_gas = 0, total_cost = 0, tank = 0;
    int start_index = 0;
    
    for(int i=0; i<A.size(); i++) {
        total_gas += A[i];
        total_cost += B[i];
        
        tank += A[i];
        tank -= B[i];
        
        if(tank < 0) {
            tank = 0;
            start_index = i+1;
        }
    }
    return total_gas >= total_cost ? start_index : -1;
}
