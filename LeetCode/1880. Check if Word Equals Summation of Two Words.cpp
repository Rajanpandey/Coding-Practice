class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int first = 0, second = 0, third = 0;

        for (auto ch : firstWord) {
            first = (first * 10) + (ch - 'a');
        }
        for (auto ch : secondWord) {
            second = (second * 10) + (ch - 'a');
        }
        for (auto ch : targetWord) {
            third = (third * 10) + (ch - 'a');
        }
        
        return (first + second) == third;
    }
};
