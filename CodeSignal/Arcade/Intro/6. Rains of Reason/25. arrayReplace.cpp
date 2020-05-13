std::vector<int> arrayReplace(std::vector<int> inputArray, int elemToReplace, int substitutionElem) {
    replace(inputArray.begin(), inputArray.end(), elemToReplace, substitutionElem);
    return inputArray;
}

# Ruby sol:
# def arrayReplace(inputArray, elemToReplace, substitutionElem)
#     inputArray.collect! { |element| element == elemToReplace ? substitutionElem : element }
# end
