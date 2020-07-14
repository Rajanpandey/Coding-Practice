public class Solution {
    public int LengthOfLIS(int[] nums) {
        int n = nums.Length;
        if (n == 0) return 0;

        int[] dp = new int[n];
        Array.Fill(dp, 1);

        int ans = 1;

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[j] < nums[i]) {
                    dp[i] = Math.Max(dp[j] + 1, dp[i]);
                    ans = Math.Max(dp[i], ans);
                }
            }
        }

        return ans;
    }
}
