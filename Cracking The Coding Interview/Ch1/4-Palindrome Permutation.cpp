#include<bits/stdc++.h>
using namespace std;

bool palindrome_permutation(string A) {
	map<char, int> map1;
    for(int i=0; i<A.length(); i++) {
        if(map1[A[i]]) {
            map1[A[i]] -= 1;
        } else {
            map1[A[i]] += 1;
        }
        if(map1[A[i]] == 0) {
            map1.erase(A[i]);
        }
    }
    return map1.size() <= 1;
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
