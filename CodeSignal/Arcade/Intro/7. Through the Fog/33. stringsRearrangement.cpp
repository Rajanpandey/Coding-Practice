bool is_happy(vector<string>& a) {
    for (int i = 1; i < a.size(); i++) {
        int diff = 0;
        for (int j = 0; j < a[i].length(); j++)
            if (a[i][j] != a[i - 1][j])
                diff += 1;

        if (diff != 1) return false;
    }
    return true;
}

bool stringsRearrangement(std::vector<std::string> inputArray) {
    sort(inputArray.begin(), inputArray.end());

    while (next_permutation(inputArray.begin(), inputArray.end()))
        if (is_happy(inputArray)) return true;

    return false;
}
