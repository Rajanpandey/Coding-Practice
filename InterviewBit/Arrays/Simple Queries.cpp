const long mod = 1e9 + 7;

bool sortDesc(const pair <int, int> &a, const pair <int, int> &b){
    return (a.second == b.second) ? a.first < b.first : a.second > b.second;
}

int power(long number, unsigned int power) {  
    long result = 1; 
    while(power) {
        if(power & 1) { 
            result = (result * number) % mod; 
        } 
        number = (number*number) % mod; 
        power /= 2;
    } 
    return result;
}

int productOfDivisors(int number) {
    int numberOfDivisors = 0;
    for(int i=1; i<=sqrt(number); i++) { 
        if(number%i == 0) { numberOfDivisors += (number/i == i) ? 1 : 2; } 
    } 
    (numberOfDivisors & 1) ? number = sqrt(number): numberOfDivisors /= 2;
    return power(long(number), numberOfDivisors);
}

vector<int> Solution::solve(vector<int> &A, vector<int> &B) {
    stack<int> s;
    vector<pair<long long, int>> maxStore (A.size(), make_pair(0, 0));
    
    // Calculating leftMax array, i.e wherever the current index is strictly less than the present element
    for(int i=0; i < A.size(); i++) {
        while(!s.empty() && A[i] > A[s.top()]) {
            s.pop();
        }
        maxStore[i].first = !s.empty() ? i-s.top()-1 : i;
        maxStore[i].second = productOfDivisors(A[i]);
        s.push(i);
    }
    
    // Clear stack for future use
    // Calculating rightMax array as well as multiplying leftMax + 1 and rightMax + 1 to get the required result 
    // Logic : Exactly (l + 1) * (r + 1) times the current number be there in the the subarrays, as by keeping the present
    // index common, there are l+1 options from the left array and r+1 options from the right array (Simple permutation)
    s = stack<int>();
    for(int i=A.size()-1; i>=0; i--) {
        while (!s.empty() && A[i] >= A[s.top()]){
            s.pop();
        }
        int rightMaxIndex = !s.empty() ? s.top()-i-1 : A.size()-i- 1;
        maxStore[i].first = (maxStore[i].first + 1)*(rightMaxIndex + 1);
        s.push(i);
    }
    
    // Sorting the array according to frequencis
    sort(maxStore.begin(), maxStore.end(), sortDesc);
    
    // getting the prefix sum which will help for binary search
    for(int i=1; i<maxStore.size(); i++) {
        maxStore[i].first += maxStore[i-1].first;
    }
    
    // Binary search
    vector<int> res(B.size(), maxStore[0].second);
    for(int i=0; i<B.size(); i++) {
        int mid = 0, low = 0, high = maxStore.size()-1;
        while(low <= high) {
            mid = low + (high - low ) / 2;
            
            if(B[i] > maxStore[mid].first) {
                low = mid + 1;
                if(B[i] > maxStore[mid].first && B[i] < maxStore[mid + 1].first) {
                    res[i] = maxStore[mid + 1].second;
                    break;
                }
            } else if (B[i] < maxStore[mid].first) {
                high = mid - 1;
                if(B[i] < maxStore[mid].first && B[i] > maxStore[mid - 1].first) {
                    res[i] = maxStore[mid ].second;
                    break;
                }
            } else {
                res[i] = maxStore[mid].second;
                break;
            }
        }
    }
    return res;
}
