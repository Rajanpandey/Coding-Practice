#include<bits/stdc++.h>
using namespace std;

string compress_string(string A) {
    string ans = "";
    int count = 0;
    for(int i=0; i<A.length(); i++) {
        count += 1;
        if(i+1 >= A.length() || A[i] != A[i+1]) {
            ans += A[i] + to_string(count);
            count = 0;
        }
    }
    return ans.length() < A.length() ? ans : A;
}

int main() {
    string A;
    cin >> A;
    cout << compress_string(A);
}
