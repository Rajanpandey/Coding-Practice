vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> answer;
    map<string, int> myMap;

    for(auto i:strings) myMap[i] += 1;
    for(auto i:queries) answer.push_back(myMap[i]);
        
    return answer;
}
