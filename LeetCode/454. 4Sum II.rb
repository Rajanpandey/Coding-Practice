# @param {Integer[]} nums1
# @param {Integer[]} nums2
# @param {Integer[]} nums3
# @param {Integer[]} nums4
# @return {Integer}
def four_sum_count(nums1, nums2, nums3, nums4)
    ans = 0
    hash = {}
    
    nums1.each do |num1|
        nums2.each do |num2|
            hash[num1 + num2] ||= 0
            hash[num1 + num2] += 1
        end
    end
    
    nums3.each do |num3|
        nums4.each do |num4|
            ans += hash[0 - num3 - num4] if hash[0 - num3 - num4]
        end
    end
    
    ans
end
