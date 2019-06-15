#include<bits/stdc++.h>
bool isAvailable[256];
using namespace std;

bool isUnique(string S) {
	for(int i=0; i<S.length(); i++) {
        if(isAvailable(S[i])) {
        	return false;
        } else {
        	return true;
        }
	}
}

int main() {
	string S;
	
	cin >> S;
	if(isUnique(S)) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
}
