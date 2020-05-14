# 250/300 Ruby sol:
def concatenationsSum(a)
    ans = 0

    a.each do |num1|
        a.each do |num2|
            ans += (num1.to_s + num2.to_s).to_i
        end
    end

    ans
end

# 300/300 C++ Sol:
# long long concatenationsSum(std::vector<int> a) {
#     int n = a.size();
#     long long lowSum = 0, offsetSum = 0;

#     for (int i = 0; i < n; i++) {
#         lowSum += a[i];

#         int size = to_string(a[i]).length();
#         int offset = pow(10, size);
#         offsetSum += offset;
#     }

#     return (lowSum * n) + (lowSum * offsetSum);
# }
