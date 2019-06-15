#include<bits/stdc++.h>
using namespace std;

int main() {
	string A, B;

	cin >> A >> B;
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	
	if (A==B) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}
