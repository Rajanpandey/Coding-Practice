bool almostIncreasingSequence(std::vector<int> sequence) {
    int prev = INT_MIN, preprev = INT_MIN, count = 0;

    for (auto elem : sequence) {
        if (elem <= prev) {
            count++;
            if (elem > preprev)
                prev = elem;
        } else {
            preprev = prev;
            prev = elem;
        }
    }

    return count <= 1;
}
