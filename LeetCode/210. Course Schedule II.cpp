// Kahn's Algorithm for Topological Sort
class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> ans;
        vector<vector<int>> adjList(numCourses);
        vector<int> indegree(numCourses);

        for (auto p : prerequisites) {
            adjList[p[1]].push_back(p[0]);
            indegree[p[0]]++;
        }

        queue<int> q;
        for (int i = 0; i < indegree.size(); i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }

        while (!q.empty()) {
            int preReq = q.front();
            q.pop();

            ans.push_back(preReq);

            for (auto course : adjList[preReq]) {
                indegree[course]--;
                if (indegree[course] == 0) {
                    q.push(course);
                }
            }
        }

        if (numCourses == ans.size()) {
            return ans;
        } else {
            return {};
        }
    }
};
