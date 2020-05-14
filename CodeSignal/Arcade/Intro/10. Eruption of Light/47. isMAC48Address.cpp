bool isMAC48Address(std::string inputString) {
    return regex_match(inputString, regex ("[0-9A-F]{2}(-[0-9A-F]{2}){5}"));
}
