class Solution {
public:
    string reorganizeString(string s) {
        string ans = "";
        map<char, int> freq;
        
        for (auto ch : s) {
            freq[ch]++;
        }
        
        priority_queue<pair<int, char>> pq;
        
        for (auto iter : freq) {
            pq.push( {iter.second, iter.first} );
        }
        
        while (pq.size() > 1) {
            auto top1 = pq.top(); pq.pop();
            auto top2 = pq.top(); pq.pop();
            
            ans += top1.second;
            ans += top2.second;
            
            top1.first--;
            top2.first--;
            
            if (top1.first > 0) pq.push(top1);
            if (top2.first > 0) pq.push(top2);
        }
        
        if (!pq.empty()) {
            if (pq.top().first > 1) {
                return "";
            } else {
                ans += pq.top().second;
            }
        }
        
        return ans;
    }
};
