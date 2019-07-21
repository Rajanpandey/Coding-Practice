/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */

bool comp(const Interval &a, const Interval &b) {
    return a.start < b.start;
}

vector<Interval> Solution::merge(vector<Interval> &A) {
    vector<Interval> ans;
    sort(A.begin(), A.end(), comp);
    
    ans.push_back(A[0]);
    
    for(int i=1; i<A.size(); i++) {
        if(A[i].start <= ans.back().end) {
            ans.back().end = max(ans.back().end, A[i].end);
        } else {
            ans.push_back(A[i]);
        }
    }
    return ans;
}