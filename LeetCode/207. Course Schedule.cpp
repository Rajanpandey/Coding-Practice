class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adjList[numCourses];
        vector<int> indegree(numCourses, 0);
        
        for (auto p : prerequisites) {
            adjList[p[1]].push_back(p[0]);
            indegree[p[0]]++;
        }

        queue<int> q;
        for (int i = 0; i < numCourses; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }

        while (!q.empty()) {
            int ele = q.front();
            q.pop();
            numCourses--;

            for (auto child : adjList[ele]) {
                indegree[child]--;
                if (indegree[child] == 0) {
                    q.push(child);
                }
            }
        }

        return numCourses == 0;
    }
};
