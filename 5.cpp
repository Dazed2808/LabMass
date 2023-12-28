#include <iostream>
#include <vector>

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    int index1 = m - 1;
    int index2 = n - 1;
    int mergedIndex = m + n - 1;

    while (index1 >= 0 && index2 >= 0) {
        if (nums1[index1] >= nums2[index2]) {
            nums1[mergedIndex--] = nums1[index1--];
        } else {
            nums1[mergedIndex--] = nums2[index2--];
        }
    }

    // Додаткові елементи з nums2 (якщо вони залишились)
    while (index2 >= 0) {
        nums1[mergedIndex--] = nums2[index2--];
    }
}

int main() {
    // Приклади використання:
    std::vector<int> nums1_1 = {1, 2, 3, 0, 0, 0};
    int m1 = 3;
    std::vector<int> nums2_1 = {2, 5, 6};
    int n1 = 3;

    merge(nums1_1, m1, nums2_1, n1);

    std::cout << "Приклад 1:";
    for (int num : nums1_1) {
        std::cout << " " << num;
    }
    std::cout << std::endl;

    std::vector<int> nums1_2 = {1};
    int m2 = 1;
    std::vector<int> nums2_2 = {};
    int n2 = 0;

    merge(nums1_2, m2, nums2_2, n2);

    std::cout << "Приклад 2:";
    for (int num : nums1_2) {
        std::cout << " " << num;
    }
    std::cout << std::endl;

    std::vector<int> nums1_3 = {0};
    int m3 = 0;
    std::vector<int> nums2_3 = {1};
    int n3 = 1;

    merge(nums1_3, m3, nums2_3, n3);

    std::cout << "Приклад 3:";
    for (int num : nums1_3) {
        std::cout << " " << num;
    }
    std::cout << std::endl;

    return 0;
}
