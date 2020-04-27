void plusMinus(vector<int> arr) {
    double positive = 0, negative = 0, zero = 0, N = arr.size();
    
    for(auto num : arr) {
        if(num < 0) ++negative;
        else if(num > 0) ++positive;
        else ++zero;
    }

    cout << positive/N <<endl << negative/N <<endl << zero/N;
}

/*
Ternary sol (less readable):
void plusMinus(vector<int> arr) {
    double positive = 0, negative = 0, zero = 0, N = arr.size();
    for(auto num : arr) (num == 0) ? ++zero : ( (num < 0) ? ++negative : ++positive );
    cout << positive/N <<endl << negative/N <<endl << zero/N;
}
*/