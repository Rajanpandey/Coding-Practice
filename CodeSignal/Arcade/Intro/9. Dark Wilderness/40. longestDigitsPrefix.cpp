std::string longestDigitsPrefix(std::string inputString) {
    string ans = "";

    for (auto ch : inputString) {
        if (!isdigit(ch)) break;
        ans += ch;
    }

    return ans;
}

// One liner:
// std::string longestDigitsPrefix(std::string inputString) {
//     return inputString.substr(0, inputString.find_first_not_of("0123456789"));
// }
