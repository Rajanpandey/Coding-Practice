std::vector<std::string> fileNaming(std::vector<std::string> names) {
    vector<string> ans;
    for (auto name : names) {
        int counter = 0;

        while (find(ans.begin(), ans.end(), counter ? name + "(" + to_string(counter) + ")" : name) != ans.end())
            counter += 1;

        ans.emplace_back(counter ? name + "(" + to_string(counter) + ")" : name);
    }

    return ans;
}
