#include <iostream>
#include <vector>

int countDigits(int num) {
    int count = 0;
    while (num) {
        num /= 10;
        count++;
    }
    return count;
}

int countNumbersWithEvenDigits(const std::vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        if (countDigits(num) % 2 == 0) {
            result++;
        }
    }
    return result;
}

int main() {
    std::vector<int> nums1 = {12, 345, 2, 6, 7896};
    int result1 = countNumbersWithEvenDigits(nums1);
    std::cout << "Приклад 1: " << result1 << std::endl;

    std::vector<int> nums2 = {555, 901, 482, 1771};
    int result2 = countNumbersWithEvenDigits(nums2);
    std::cout << "Приклад 2: " << result2 << std::endl;

    return 0;
}
