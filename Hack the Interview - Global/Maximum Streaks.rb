#!/bin/ruby

require 'json'
require 'stringio'

#
# Complete the 'getMaxStreaks' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts STRING_ARRAY toss as parameter.
#

def getMaxStreaks(toss)
    [toss.count('Heads').zero? ? 0 : (toss.join.split('Tails').max.length / 5), toss.count('Tails').zero? ? 0 : (toss.join.split('Heads').max.length / 5)]
end

fptr = File.open(ENV['OUTPUT_PATH'], 'w')

toss_count = gets.strip.to_i

toss = Array.new(toss_count)

toss_count.times do |i|
    toss_item = gets.chomp

    toss[i] = toss_item
end

ans = getMaxStreaks toss

fptr.write ans.join " "
fptr.write "\n"

fptr.close()