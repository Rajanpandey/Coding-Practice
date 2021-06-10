# @param {Integer[]} nums
# @return {Integer}
def missing_number(nums)
    return (1..(nums.size)).reduce(:+) - nums.reduce(:+)
end
