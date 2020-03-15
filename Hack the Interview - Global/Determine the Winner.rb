#!/bin/ruby

require 'json'
require 'stringio'

#
# Complete the 'getRoundResult' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. CHARACTER winning_suit
#  2. CHARACTER suit1
#  3. INTEGER number1
#  4. CHARACTER suit2
#  5. INTEGER number2
#

def getRoundResult(winning_suit, suit1, number1, suit2, number2)
    return 'Player 1 wins' if suit1 == winning_suit && suit2 != winning_suit
    return 'Player 2 wins' if suit2 == winning_suit && suit1 != winning_suit
    number1 == number2 ? 'Draw' : (number1 > number2 ? 'Player 1 wins' : 'Player 2 wins')
end

fptr = File.open(ENV['OUTPUT_PATH'], 'w')

winning_suit = gets.chomp[0]

n = gets.strip.to_i

n.times do |n_itr|
    first_multiple_input = gets.rstrip.split

    suit1 = first_multiple_input[0][0]

    number1 = first_multiple_input[1].to_i

    suit2 = first_multiple_input[2][0]

    number2 = first_multiple_input[3].to_i

    result = getRoundResult winning_suit, suit1, number1, suit2, number2

    fptr.write result
    fptr.write "\n"
end

fptr.close()
