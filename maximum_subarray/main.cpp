#include <iostream>
#include <vector>

int maxSubArray(std::vector<int>& nums) {
    int sum = nums[0];
    int maxSum = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        sum = std::max(nums[i], sum + nums[i]);
        maxSum = std::max(maxSum, sum);
    }
    return maxSum;
}

int main() {
    std::vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxSum = maxSubArray(nums);
    std::cout << "Maximum subarray sum: " << maxSum << std::endl;
    return 0;
}
