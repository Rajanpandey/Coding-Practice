class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.length() == 0) {
            return 0;
        }
        if (haystack.length() == 0) {
            return -1;
        }

        for (int i = 0; i < haystack.length(); i++) {
            if (i > haystack.length() - needle.length()) {
                break;
            }

            for (int j = 0; j < needle.length(); j++) {
                if (haystack[i+j] != needle[j])
                    break;
                if (j == needle.length()-1)
                    return i;
            }
        }

        return -1;

    }
};
