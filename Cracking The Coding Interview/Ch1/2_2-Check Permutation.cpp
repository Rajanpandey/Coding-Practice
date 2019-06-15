#include<bits/stdc++.h>
using namespace std;

bool check_permutation(string A, string B) {
    if(A.length() != B.length()) {
        return false;
    }

    int table[26];
    for(int i=0; i<A.length(); i++) {
        table[A[i]-'a']++;
    }
    for(int i=0; i<B.length(); i++) {
        table[B[i]-'a']--;
        if (table[B[i]-'a']<0) {
            return false;
        }
    }
    return true;
}

int main() {
	string A, B;
    int T;
    
    cin >> T;
    while(T--) {
    	cin >> A >> B;
    	
    	if(anagram(A, B)) {
    	    cout << "YES" << endl;
    	} else {
    	    cout << "NO" << endl;
    	}
    }
}
