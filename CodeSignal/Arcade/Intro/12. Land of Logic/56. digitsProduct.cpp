int digitsProduct(int product) {
    if (product < 10) return product ?: 10;

    string ans;

    for (int i = 9; i > 1; i--) {
        while (product % i == 0) {
            product /= i;
            ans = char('0' + i) + ans;
        }
    }

    return product == 1 ? stoi(ans) : -1;
}
