char firstDigit(std::string inputString) {
    for (auto ch : inputString)
        if (isdigit(ch))
            return ch;
}
