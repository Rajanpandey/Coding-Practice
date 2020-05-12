int makeArrayConsecutive2(std::vector<int> statues) {
    int count = 0;
    sort(statues.begin(), statues.end());

    for (int i = 0; i < statues.size()-1; ++i) {
        if (statues[i] != statues[i+1] - 1) count += (statues[i+1] - statues[i]) - 1;
    }

    return count;
}
