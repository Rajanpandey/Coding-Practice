vector<int> reverseArray(vector<int> a) {
    vector<int> b;
    for(int i=a.size()-1; i>=0; i--) b.push_back(a[i]);
    return b;
}
