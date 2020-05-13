// 273/300 score
long long hashMap(std::vector<std::string> queryType, std::vector<std::vector<int>> query) {
    long long ans = 0;
    map<int, int> myMap;

    for (int i = 0; i < queryType.size(); i++) {
        if (queryType[i] == "insert")
            myMap[query[i][0]] = query[i][1];

        if (queryType[i] == "get")
            ans += myMap[query[i][0]];

        if (queryType[i] == "addToKey") {
            map<int, int> newMap;
            for(auto const& elem : myMap)
                newMap[elem.first + query[i][0]] = elem.second;
            myMap = newMap;
        }

        if (queryType[i] == "addToValue")
            for(auto const& elem : myMap)
                myMap[elem.first] = elem.second + query[i][0];
    }

    return ans;
}
