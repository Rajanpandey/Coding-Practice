void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int appleInHouse = 0, orangeInHouse = 0;    
    
    for(int i : apples)
        if(a+i >= s && a+i <= t) appleInHouse++;
    
    for(int i:oranges)
        if(b+i <= t && b+i >= s) orangeInHouse++;

    cout << appleInHouse << endl << orangeInHouse;
}
