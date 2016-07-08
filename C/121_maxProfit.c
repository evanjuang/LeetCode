int maxProfit(int* prices, int pricesSize) {
    int min_price = prices[0];
    int max_profit = 0;
    int i;
    int temp;

    for (i = 0; i < pricesSize; i++) {
        if (prices[i] < min_price) 
            min_price = prices[i];
        
        if ((temp = prices[i] - min_price) > max_profit)
            max_profit = temp;
    }
    return max_profit;
}
