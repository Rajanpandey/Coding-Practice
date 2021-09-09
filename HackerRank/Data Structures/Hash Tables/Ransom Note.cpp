void checkMagazine(vector<string> magazine, vector<string> note) {
    map<string, int> map;
    for (auto word : magazine) {
        map[word]++;
    }
    
    for (auto word : note) {
        if (map[word]) {
            map[word]--;
        } else {
            cout << "No";
            return;
        }
    }
    
    cout << "Yes";
}
