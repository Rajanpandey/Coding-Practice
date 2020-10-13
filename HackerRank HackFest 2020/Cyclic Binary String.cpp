#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'maximumPower' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int maximumPower(string s) {
    int n = s.length();

    if (s.find('1') == string::npos)
        return -1;

    if (s.find('0') == string::npos)
        return 0;

    int i = 0, j = n;
    int maxConsecZeroes = 0, temp = 0;

    if(s[0] == '0' && s[j - 1] == '0') {
        while (s[i] != '1') {
            maxConsecZeroes += 1;
            i += 1;
        }

        while (s[j - 1] != '1') {
            maxConsecZeroes += 1;
            j -= 1;
        }
    }

    for (int k = i; k < j; k++) {
        if (s[k] == '0') {
            temp += 1;
        } else {
            maxConsecZeroes = max(maxConsecZeroes, temp);
            temp = 0;
        }
    }

    maxConsecZeroes = max(maxConsecZeroes, temp);

    return maxConsecZeroes;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = maximumPower(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
