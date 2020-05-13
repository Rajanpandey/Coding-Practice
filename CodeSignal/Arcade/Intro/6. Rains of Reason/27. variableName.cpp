bool variableName(std::string name) {
    if (isdigit(name[0])) return false;
    for(auto ch : name)
        if (!isalnum (ch) && ch != '_')
            return false;

    return true;
}

// Regex sol:
// bool variableName(std::string name) {
//     return regex_match(name, regex ("[_a-zA-Z][_a-zA-Z0-9]*"));
// }
