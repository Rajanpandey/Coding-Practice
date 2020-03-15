#!/bin/ruby

require 'json'
require 'stringio'

#
# Complete the 'getStrength' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. STRING password
#  2. INTEGER weight_a
#

def getStrength(password, weight_a)
    password.chars.map { |x| (x.ord-97+weight_a)%26 }.inject { |result, element| result + element }
end

fptr = File.open(ENV['OUTPUT_PATH'], 'w')

password = gets.chomp

weight_a = gets.strip.to_i

strength = getStrength password, weight_a

fptr.write strength
fptr.write "\n"

fptr.close()
