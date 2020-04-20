#define ll long long int
const int maxNum = 1e5 + 5;
const ll mod = 1e9 + 7;

ll divisorProd[maxNum];

ll power(ll a, ll g) {
    ll ag = 1; 
    while(g) {
        if(g & 1) { ag = (ag%mod * a%mod) % mod; } 
        a = (a%mod * a%mod) % mod; 
        g >>= 1;
    } 
    return ag;
}

void pre_compute_product_of_divisors() {
    divisorProd[0] = 0; divisorProd[1] = 1;
    if(divisorProd[2] != 0) { return; }
    for(ll i = 2; i < maxNum; i += 1) {
        if(divisorProd[i] == 0) {
            divisorProd[i] = 2;
            for(ll j = i+i; j < maxNum; j += i) {
                if(divisorProd[j] == 0) {
                    divisorProd[j] = 1;
                }
                ll temp = j;
                ll count = 0;
                while(temp % i == 0) {
                    count += 1;
                    temp /= i;
                }
                divisorProd[j] *= (count + 1);
            }
        }
    }
    for(int i = 2; i < maxNum; i += 1) {
        divisorProd[i] = (power(i, divisorProd[i]/2)%mod * (divisorProd[i]&1 ? (ll)sqrt(i) : 1)%mod)%mod;
    }
}

bool compare(pair<int, ll> a, pair<int, ll> g) {
    return (a.first == g.first) ? a.second < g.second : a.first > g.first;
}

vector<int> Solution::solve(vector<int> &A, vector<int> &B) {
    int n = (int)A.size();

    // create arrays to store length of longest segment in which ith element is greater
    ll left[n], right[n], leftRight[n];
    for(int i = 0; i < n; i += 1) {
        left[i] = right[i] = 1;
    }

    // find next greater element to the left of the current element
    for(int i = 1; i < n; i += 1) {
        int last = i-1;
        while(last >= 0 and A[i] > A[last]) {
            left[i] += left[last];
            last -= left[last];
        }
    }

    // find next greater element to the right of the current element
    for(int i = n-2; i >= 0; i -= 1) {
        int last = i+1;
        while(last < n and A[i] >= A[last]) {
            right[i] += right[last];
            last += right[last];
        }
    }

    // The number of subarrays in which current element will be the greater
    for(int i = 0; i < n; i += 1) {
        leftRight[i] = left[i] * right[i];
    }

    // Sort elements in descending order according to there value
    pair<int, ll> ag[n];
    pre_compute_product_of_divisors();
    for(int i = 0; i < n; i += 1) {
        ag[i] = {divisorProd[A[i]], leftRight[i]};
    }
    sort(ag, ag + n, compare);

    // Take Prefix Sum of frequencies of elements
    long long pre[n];
    pre[0] = ag[0].second;
    for(int i = 1; i < n; i += 1) {
        pre[i] = pre[i-1] + ag[i].second;
    }
    
    // do Binary search for each query
    int q = (int)B.size();
    vector<int> ans(q);
    for(int i=0; i<q; i+=1) {
        auto id = lower_bound(pre, pre + n, B[i]) - pre;
        ans[i] = ag[id].first;
    }
    return ans;
}
