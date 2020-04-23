class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q(stones.begin(), stones.end());
        while(q.size() > 1) {
            int x = q.top();
            q.pop();
            int y = q.top();
            q.pop();
            if(x-y != 0) { q.push(abs(x-y)); }
        }
        return (q.size() == 0) ? 0 : q.top();
    }
};
