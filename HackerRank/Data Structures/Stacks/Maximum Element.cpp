#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, type, x, max = 0;
    vector<int> stack;

    cin >> N;
    for(int i=0; i<N; i++) {

        cin >> type;
        switch(type) {
            case 1:
                cin >> x;                
                stack.push_back(x);
                break;
                
            case 2:
                if(!stack.empty()) stack.pop_back();
                break;
                
            case 3:
                cout << *max_element(stack.begin(), stack.end()) << endl;
                break;
        }
    }
}
