# @param {Integer[]} arr
# @return {Integer}
def count_elements(arr)
    ans = 0
    arr.each { |num| ans += 1 if arr.include? num+1 }
    ans
end
