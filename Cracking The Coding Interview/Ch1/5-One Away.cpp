#include<bits/stdc++.h>
using namespace std;

bool one_away(string A, string B) {
    if(abs(A.length() - B.length()) > 1) {
        return false;
    }
    
    int i = 0, j = 0;
    int count = 0;
    while(i < A.length() && j < B.length()) {
        if(A[i] != B[j]) {
            if(A.length() > B.length()) {
                i++;
            } else if (A.length() < B.length()) {
                j++;
            } else {
                i++;
                j++;
            }
            count += 1;
        }
        else {
            i++;
            j++;
        }
    }
    if(i < A.length() || j < B.length()) {
        count += 1;
    }
    return count <= 1;
}

int main() {
    string A, B;
    cin >> A >> B;
    if(one_away(A, B)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
}
 
 