int maximumToys(vector<int> prices, int k) {
    int count = 0;
    sort(prices.begin(), prices.end());

    for(auto price : prices){
        if(price < k){
            k -= price;
            count++;
        }
    }

    return count;
}
