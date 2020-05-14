int firstDuplicate(std::vector<int> a) {
    set<int> mySet;

    for (auto num : a) {
        if (mySet.count(num))
            return num;
        else
            mySet.insert(num);
    }

    return -1;
}
