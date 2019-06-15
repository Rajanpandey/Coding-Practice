#include<bits/stdc++.h>
using namespace std;

bool palindrome_permutation(string A) {
    static int table[26];
    int count = 0;
    
    for(int i=0; i<A.length(); i++) {
        if(table[A[i]-'a']) {
            table[A[i]-'a']--;
        } else {
            table[A[i]-'a']++;
        }
    }
    
    for(int i=0; i<26; i++) {
        if(table[i] != 0) {
            count ++;
        }
        if(count > 1) {
            return false;
        }
    }
    return true;
}

int main() {
	string A;

	cin >> A;
	
	if (palindrome_permutation(A)) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}
