    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        if len(prices) < 2:
            return 0
            
        low_profit = prices[0]
        max_profit = 0
        for p in prices:
            low_profit = min(low_profit, p)
            max_profit = max(max_profit, p - low_profit)
        
        return max_profit
