std::vector<std::vector<int>> meanGroups(std::vector<std::vector<int>> a) {
    vector<vector<int> > ans;
    map<float, vector<int> > myMap;

    for (int i = 0; i < a.size(); i++) {
        float sum = 0;
        for (int j = 0; j < a[i].size(); j++)
            sum += a[i][j];
        myMap[sum / a[i].size()].push_back(i);
    }

    for(auto const& elem : myMap)
        ans.push_back(elem.second);

    sort(ans.begin(), ans.end());

    return ans;
}
