#include<iostream>
#include<iomanip>

using namespace std;

main() {
    int X;
    double Y;
    
    cin >> X >> Y;
    if(!(X % 5)) cout << Y;
    else cout << ((X + 0.50 > Y) ? Y : Y-X-0.50);
}
