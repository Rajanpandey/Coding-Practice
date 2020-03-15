#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'getMaxStreaks' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts STRING_ARRAY toss as parameter.
 */

vector<int> getMaxStreaks(vector<string> toss) {
    int headsCount = 0, tailsCount = 0, tempHeadsCount = 0, tempTailsCount = 0;
    for(auto i:toss) {
        if(i == "Heads") {
            tempHeadsCount += 1;
            tailsCount = max(tailsCount, tempTailsCount);
            tempTailsCount = 0;
        } else {
            tempTailsCount += 1;
            headsCount = max(headsCount, tempHeadsCount);
            tempHeadsCount = 0;
        }
    }
    headsCount = max(headsCount, tempHeadsCount);
    tailsCount = max(tailsCount, tempTailsCount);
    return {headsCount, tailsCount};
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string toss_count_temp;
    getline(cin, toss_count_temp);

    int toss_count = stoi(ltrim(rtrim(toss_count_temp)));

    vector<string> toss(toss_count);

    for (int i = 0; i < toss_count; i++) {
        string toss_item;
        getline(cin, toss_item);

        toss[i] = toss_item;
    }

    vector<int> ans = getMaxStreaks(toss);

    for (int i = 0; i < ans.size(); i++) {
        fout << ans[i];

        if (i != ans.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
