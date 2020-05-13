int depositProfit(int deposit, int rate, int threshold) {
    int year = 0;
    float sum = deposit;

    while (sum < threshold) {
        year += 1;
        sum += (sum * rate) / 100;
    }

    return year;
}
