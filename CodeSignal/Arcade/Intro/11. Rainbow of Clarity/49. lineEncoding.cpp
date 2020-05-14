std::string lineEncoding(std::string s) {
    string ans = "";

    for (int i = 0; i < s.length(); i++) {
        int counter = 1;

        while (s[i] == s[i + 1]) {
            counter += 1;
            i += 1;
        }

        if (counter != 1)
            ans += to_string(counter);

        ans += s[i];
    }

    return ans;
}
