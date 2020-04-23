# @param {Integer} n
# @return {Integer}
def subtract_product_and_sum(n)
    n.digits.reduce(:*) - n.digits.sum
end

=begin
C++ sol:
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, product = 1;
        for (; n > 0; n /= 10) {
            sum += n % 10;
            product *= n % 10;
        }
        return product - sum;
    }
};
=end