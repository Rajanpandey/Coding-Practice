class Solution:
    # @param A : string
    # @return string
    def reverseWords(self, A):
        return " ".join(reversed(A.split()))