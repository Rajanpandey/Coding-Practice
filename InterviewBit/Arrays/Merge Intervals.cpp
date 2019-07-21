/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 
bool cmp(const Interval &a, const Interval &b){
    return (a.start < b.start);
}

vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    vector<Interval> ans;
    
    intervals.push_back(newInterval);
    sort(intervals.begin(), intervals.end(), cmp);
    
    ans.push_back(intervals[0]);
    
    for(int i=1; i<intervals.size(); i++) {
        if(intervals[i].start <= ans.back().end) {
            ans.back().end = max(ans.back().end, intervals[i].end);
        } else {
            ans.push_back(intervals[i]);
        }   
    }   
    
    return ans;
}
