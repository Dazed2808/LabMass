#include <iostream>
#include <vector>

int maxOnesCount(const std::vector<int>& nums) {
    int maxCount = 0;
    int currentCount = 0;

    for (int num : nums) {
        if (num == 1) {
            currentCount++;
            maxCount = std::max(maxCount, currentCount);
        } else {
            currentCount = 0;
        }
    }

    return maxCount;
}

int main() {
    std::vector<int> nums1 = {1, 1, 0, 1, 1, 1};
    int result1 = maxOnesCount(nums1);
    std::cout << "Приклад 1: " << result1 << std::endl;

    std::vector<int> nums2 = {1, 0, 1, 1, 0, 1};
    int result2 = maxOnesCount(nums2);
    std::cout << "Приклад 2: " << result2 << std::endl;

    return 0;
}
