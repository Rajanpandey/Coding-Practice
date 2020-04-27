int birthdayCakeCandles(vector<int> ar) {
    return count(ar.begin(), ar.end(), *max_element(ar.begin(), ar.end()));
}
