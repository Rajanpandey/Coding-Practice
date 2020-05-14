std::string messageFromBinaryCode(std::string code) {
    string ans;

    for (int i = 0; i < code.size(); i += 8) {
        bitset<8> c (code.substr(i, 8));
        ans += c.to_ulong();
    }

    return ans;
}
