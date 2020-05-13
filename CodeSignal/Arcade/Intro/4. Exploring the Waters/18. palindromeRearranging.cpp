bool palindromeRearranging(std::string inputString) {
    map<char, int> myMap;
    bool midNumberFound = false;

    for (char ch : inputString) {
        myMap[ch]++;
    }

    for(auto const& i : myMap) {
        if(i.second % 2 != 0) {
            if (midNumberFound) return false;
            else midNumberFound = true;
        }
    }
    return true;
}
