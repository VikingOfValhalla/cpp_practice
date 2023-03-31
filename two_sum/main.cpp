#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> hash;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (hash.count(complement)) {
            return {hash[complement], i};
        }
        hash[nums[i]] = i;
    }
    return {};
}

int main () {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    std::vector<int> indices = twoSum(nums, target);
    std::cout << "[" << indices[0] << ", " << indices[1] << "]" << std::endl;
    return 0;
}
