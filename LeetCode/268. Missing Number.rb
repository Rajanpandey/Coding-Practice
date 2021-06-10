# @param {Integer[]} nums
# @return {Integer}
def missing_number(nums)
    (1..nums.size).sum - nums.sum
end
