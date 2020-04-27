void staircase(int n) {
    int x = 1;
    
    while(n) {
        for(int i=0; i<n-1; i++) cout << " ";
        for(int j=0; j<x; j++) cout << "#";
        cout << endl;
        x++;
        n--;
    }
}
