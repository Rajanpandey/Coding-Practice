// Dijkstra's Algorithm to find Single Source Shortest Path
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int, int>> adjList[n + 1];

        for (auto t : times) {
            adjList[t[0]].push_back(make_pair(t[1], t[2]));
        }
        vector<int> dist(n + 1, INT_MAX);
        dist[k] = 0;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq;
        pq.push(make_pair(0, k));

        while (!pq.empty()) {
            pair<int, int> p = pq.top();
            pq.pop();

            int source = p.second;
            for (auto to : adjList[source]) {
                int destination = to.first, time = to.second;

                if (dist[destination] > dist[source] + time) {
                    dist[destination] = dist[source] + time;
                    pq.push(make_pair(dist[destination], destination));
                }
            }
        }

        int ans = *max_element(dist.begin() + 1, dist.end());
        return ans == INT_MAX ? -1 : ans;
    }
};

/* Bellman-Ford Algorithm to find Single Source Shortest Path

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> dp (n + 1, INT_MAX);
        dp[k] = 0;

        for (int i = 0; i < n; i++) {
            for (auto t : times) {
                int from = t[0];
                int to = t[1];
                int time = t[2];

                if (dp[from] != INT_MAX) {
                    dp[to] = min(dp[to], dp[from] + time);
                }
            }
        }

        int maxTime = *max_element(dp.begin() + 1, dp.end());
        return  maxTime == INT_MAX ? -1 : maxTime;
    }
};

/*
