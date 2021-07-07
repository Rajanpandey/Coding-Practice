class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adjList(numCourses);
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
            int preReq = q.front();
            q.pop();
            numCourses--;

            for (auto course : adjList[preReq]) {
                indegree[course]--;
                if (indegree[course] == 0) {
                    q.push(course);
                }
            }
        }

        return numCourses == 0;
    }
};
