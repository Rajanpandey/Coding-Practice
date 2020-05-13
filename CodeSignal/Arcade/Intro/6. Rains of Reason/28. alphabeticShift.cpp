std::string alphabeticShift(std::string inputString) {
    for (int i = 0; i < inputString.length(); i++)
        inputString[i] = (inputString[i] + 1 - 'a') % 26 + 'a';

    return inputString;
}
