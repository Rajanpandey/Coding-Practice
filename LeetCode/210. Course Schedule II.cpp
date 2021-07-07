class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> ans;
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
            ans.push_back(preReq);
            numCourses--;
            
            for (auto course : adjList[preReq]) {
                indegree[course]--;
                if (indegree[course] == 0) {
                    q.push(course);
                }
            }
        }
        
        if (numCourses == 0)
            return ans;
        else 
            return {};
    }
};
