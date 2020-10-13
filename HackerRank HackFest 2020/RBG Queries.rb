# Brute force solution. Gives TLE for bigger test cases
#!/bin/ruby

require 'json'
require 'stringio'


#
# Complete the 'mixColors' function below.
#
# The function is expected to return a STRING_ARRAY.
# The function accepts following parameters:
#  1. 2D_INTEGER_ARRAY colors
#  2. 2D_INTEGER_ARRAY queries
#

def mixColors(colors, queries)
    ans = []

    queries.each { |query|
        arr = Array.new(3)

        colors.each { |color|
            if color[0] <= query[0] && color[1] <= query[1] && color[2] <= query[2]
                arr[0] = color[0] if color[0] == query[0]
                arr[1] = color[1] if color[1] == query[1]
                arr[2] = color[2] if color[2] == query[2]
            end
            break if arr == query || (color[0] < query[0] && color[1] < query[1] && color[2] < query[2])
        }

        if arr == query
            ans << "YES"
        else
            ans << "NO"
        end
    }

    ans
end

fptr = File.open(ENV['OUTPUT_PATH'], 'w')

first_multiple_input = gets.rstrip.split

n = first_multiple_input[0].to_i

q = first_multiple_input[1].to_i

colors = Array.new(n)

n.times do |i|
    colors[i] = gets.rstrip.split.map(&:to_i)
end

queries = Array.new(q)

q.times do |i|
    queries[i] = gets.rstrip.split.map(&:to_i)
end

result = mixColors colors, queries

fptr.write result.join "\n"
fptr.write "\n"

fptr.close()
