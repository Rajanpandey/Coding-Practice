def allLongestStrings(inputArray)
    max_size = inputArray.map(&:length).max
    inputArray.reject { |num| num.length < max_size }
end
