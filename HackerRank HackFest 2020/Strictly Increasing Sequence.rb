#!/bin/ruby

require 'json'
require 'stringio'

#
# Complete the 'whoIsTheWinner' function below.
#
# The function is expected to return a STRING.
# The function accepts INTEGER_ARRAY arr as parameter.
#

def whoIsTheWinner(arr)
    if arr.uniq.length == arr.length
      return "First"
    else
      return (arr.length % 2 == 0) ? "Second" : "First"
    end
end

fptr = File.open(ENV['OUTPUT_PATH'], 'w')

t = gets.strip.to_i

t.times do |t_itr|
    n = gets.strip.to_i

    arr = gets.rstrip.split.map(&:to_i)

    result = whoIsTheWinner arr

    fptr.write result
    fptr.write "\n"
end

fptr.close()
