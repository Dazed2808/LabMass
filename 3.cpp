#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> sortedSquares(const std::vector<int>& nums) {
    std::vector<int> result(nums.size());
    
    for (size_t i = 0; i < nums.size(); ++i) {
        result[i] = nums[i] * nums[i];
    }

    std::sort(result.begin(), result.end());

    return result;
}

int main() {
    // Приклади використання:
    std::vector<int> nums1 = {-4, -1, 0, 3, 10};
    std::vector<int> result1 = sortedSquares(nums1);
    std::cout << "Приклад 1:";
    for (int num : result1) {
        std::cout << " " << num;
    }
    std::cout << std::endl;

    std::vector<int> nums2 = {-7, -3, 2, 3, 11};
    std::vector<int> result2 = sortedSquares(nums2);
    std::cout << "Приклад 2:";
    for (int num : result2) {
        std::cout << " " << num;
    }
    std::cout << std::endl;

    return 0;
}
