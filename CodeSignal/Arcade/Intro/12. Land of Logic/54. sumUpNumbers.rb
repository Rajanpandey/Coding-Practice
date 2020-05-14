def sumUpNumbers(inputString)
    inputString.scan(/[0-9]+/).map(&:to_i).sum
end
