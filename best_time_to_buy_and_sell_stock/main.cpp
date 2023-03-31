#include <iostream>
#include <vector>
#include <climits>

int calculateMaxProfit(std::vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int i = 0; i < prices.size(); i++) {
        minPrice = std::min(minPrice, prices[i]);
        maxProfit = std::max(maxProfit, prices[i] - minPrice);
    }
    return maxProfit;
}

int main() {
    std::vector<int> prices = {7, 1, 5, 3, 6, 4};
    int maxProfit = calculateMaxProfit(prices);
    std::cout << "Maximum profit: " << maxProfit << std::endl;
    return 0;
}
