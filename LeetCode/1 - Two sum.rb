# @param {Integer[]} nums
# @param {Integer} target
# @return {Integer[]}
def two_sum(nums, target)
    hash = {}
    nums.each_with_index do |number, index|
        if hash[target - number]
            return [hash[target - number], index]
        else
            hash[number] = index
        end
    end
end
