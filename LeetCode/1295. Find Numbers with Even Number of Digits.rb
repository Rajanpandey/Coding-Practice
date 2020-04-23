# @param {Integer[]} nums
# @return {Integer}
def find_numbers(nums)
    nums.count { |num| num.digits.size.even? }
end
