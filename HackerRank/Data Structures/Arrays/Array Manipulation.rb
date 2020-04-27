N, M = gets.chomp.split(' ').map(&:to_i)
arr = Array.new(N + 1, 0)

M.times do
    start, finish, value = gets.chomp.split(' ').map(&:to_i)
    arr[start - 1] += value
    arr[finish] -= value
end

temp, max = 0, 0
arr.each do |value|
    temp += value
    max = [max, temp].max
end

puts max
