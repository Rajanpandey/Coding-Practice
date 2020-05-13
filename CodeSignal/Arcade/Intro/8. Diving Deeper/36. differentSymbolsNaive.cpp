int differentSymbolsNaive(std::string s) {
    set<int> mySet;

    for (auto ch : s)
        mySet.insert(ch);

    return mySet.size();
}
