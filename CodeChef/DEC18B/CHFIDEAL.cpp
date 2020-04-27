#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int firstPick, hostPick, finalPick;
    srand(time(NULL));

    firstPick = 1 + rand() % 3;
    cout << firstPick << endl;
    
    cin >> hostPick;
    if(firstPick == 1 && hostPick == 2) finalPick = 3;
    else if(firstPick == 1 && hostPick == 3) finalPick = 2;
    else if(firstPick == 2 && hostPick == 1) finalPick = 3;
    else if(firstPick == 2 && hostPick == 3) finalPick = 1;
    else if(firstPick == 3 && hostPick == 1) finalPick = 2;
    else if(firstPick == 3 && hostPick == 2) finalPick = 1;
    
    cout << finalPick << endl;
}
