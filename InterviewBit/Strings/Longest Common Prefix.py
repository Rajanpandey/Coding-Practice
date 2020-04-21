class Solution:
    # @param A : list of strings
    # @return a strings
    def longestCommonPrefix(self, A):
        lcp = ""
        for string in zip(*A):
            if (string[0], ) * len(string) == string:
                lcp += string[0]
            else: break
        return lcp