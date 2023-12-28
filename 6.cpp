#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }

    int uniqueCount = 1;  // Індекс першого унікального елемента

    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] != nums[i - 1]) {
            nums[uniqueCount++] = nums[i];
        }
    }

    return uniqueCount;
}

int main() {
    // Приклади використання:
    std::vector<int> nums1 = {1, 1, 2};
    int result1 = removeDuplicates(nums1);
    std::cout << "Приклад 1: " << result1 << ", nums = [";
    for (int i = 0; i < result1; ++i) {
        std::cout << " " << nums1[i];
    }
    std::cout << " ]" << std::endl;

    std::vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int result2 = removeDuplicates(nums2);
    std::cout << "Приклад 2: " << result2 << ", nums = [";
    for (int i = 0; i < result2; ++i) {
        std::cout << " " << nums2[i];
    }
    std::cout << " ]" << std::endl;

    return 0;
}
