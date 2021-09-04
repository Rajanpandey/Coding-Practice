vector<int> rotLeft(vector<int> a, int shiftAmount) {
    int lengthOfArray = a.size();
    vector<int> ans(lengthOfArray);

    for (int i = 0; i < lengthOfArray; i++) {
        // For left rotation,  int newLocation = (i + (lengthOfArray - shiftAmount)) % lengthOfArray;
        // For right rotation, int newLocation = (i + (lengthOfArray + shiftAmount)) % lengthOfArray;
        // Or, int newLocation = (i + shiftAmount) % lengthOfArray;
        int newLocation = (i + (lengthOfArray - shiftAmount)) % lengthOfArray;
        ans[newLocation] = a[i];
    }

    return ans;
}
