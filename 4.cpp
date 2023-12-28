#include <iostream>
#include <vector>

void duplicateZeros(std::vector<int>& arr) {
    int original_size = arr.size();
    int zeros_to_duplicate = 0;

    for (int num : arr) {
        if (num == 0) {
            zeros_to_duplicate++;
        }
    }

    for (int i = original_size - 1; i >= 0; --i) {
        if (arr[i] == 0) {
            if (i + zeros_to_duplicate < original_size) {
                arr[i + zeros_to_duplicate] = 0;
            }

            zeros_to_duplicate--;

            if (i + zeros_to_duplicate < original_size) {
                arr[i + zeros_to_duplicate] = 0;
            }
        } else {
            if (i + zeros_to_duplicate < original_size) {
                arr[i + zeros_to_duplicate] = arr[i];
            }
        }
    }
}

int main() {
    std::vector<int> arr1 = {1, 0, 2, 3, 0, 4, 5, 0};
    duplicateZeros(arr1);
    std::cout << "Приклад 1:";
    for (int num : arr1) {
        std::cout << " " << num;
    }
    std::cout << std::endl;

    std::vector<int> arr2 = {1, 2, 3};
    duplicateZeros(arr2);
    std::cout << "Приклад 2:";
    for (int num : arr2) {
        std::cout << " " << num;
    }
    std::cout << std::endl;

    return 0;
}
