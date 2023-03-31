#include <iostream>
#include <vector>

std::vector<int> productExceptSelf(std::vector<int>& nums) {
    std::vector<int> output(nums.size(), 1);
    int leftProduct = 1;
    int rightProduct = 1;
    for (int i = 0; i < nums.size(); i++) {
        output[i] *= leftProduct;
        leftProduct *= nums[i];
        output[nums.size() - i - 1];
        rightProduct *= nums[nums.size() - i - 1];
    }
    return output;
}


int main() {
    std::vector<int> nums = {1, 2, 3, 4};
    std::vector<int> products = productExceptSelf(nums);
    std::cout << "Products: ";
    for (int product : products) {
        std::cout << product << " ";
    }

    std::cout << std::endl;
    return 0;
}