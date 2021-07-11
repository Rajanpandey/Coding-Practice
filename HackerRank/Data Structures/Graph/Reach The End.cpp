string reachTheEnd(vector<string> grid, int maxTime) {
    /*
    Give a nodeNumber  to all the cells with 0 for (0,0).
    To reach any cell by number, implement division algorithm -> cell no (row, col) = row * (no of cols) + col
    E.g. 11 = 2 (4)+ 3 means (2,3) for 4 columns grid.
    */

    int nodeNumber = 0;
    map<int, vector<int>> adjList;
    int noOfRows = grid.size();
    int noOfCols = grid[0].size();

    // Construct the connected cells (contains '.'), a adjList with adjacency list
    for (int i = 0; i < noOfRows; i++) {
        for (int j = 0; j < noOfCols; j++) {
            if (grid[i][j] == '.') {
                vector<int> siblings;
                if (j < noOfCols - 1 && grid[i][j + 1] == '.') {
                    siblings.push_back(nodeNumber + 1);
                }
                if (i < noOfRows - 1 && grid[i + 1][j] == '.') {
                    siblings.push_back(nodeNumber + noOfCols);
                }
                adjList[nodeNumber] = siblings;
            }
            nodeNumber++;
        }
    }

    int reachTime = 0;
    int targetCellNo = (noOfCols * noOfRows) - 1;

    // DFS
    stack<int> stack;
    stack.push(0);
    vector<vector<bool> > visited (noOfRows, vector<int> (noOfCols));

    while (!stack.isEmpty()) {
        int currentNode = stack.pop();
        if (currentNode == targetCellNo && reachTime <= maxTime) {
            return "Yes";
        }

        reachTime++;
        int i = currentNode / noOfCols;
        int j = currentNode % noOfCols;

        if (!visited[i][j]) {
            visited[i][j] = true;
            for (auto node : adjList[currentNode]) {
                stack.push(node);
            }
        }
    }

    return "No";
}
