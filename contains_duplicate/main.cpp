#include <iostream>
#include <vector>
#include <unordered_set>

bool containsDuplicate(std::vector<int>& nums) {
    std::unordered_set<int> hash;
    for (int num: nums) {
        if (hash.count(num)) {
            return true;
        }
        hash.insert(num);
    }
    return false;
}


int main() {
    std::vector<int> nums = {1, 2, 3, 1};
    bool hasDuplicate = containsDuplicate(nums);
    std::cout << "Contains duplicate: " << std::boolalpha << hasDuplicate << std::endl;
    return 0;
}
