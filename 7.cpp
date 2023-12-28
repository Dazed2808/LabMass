#include <iostream>
#include <unordered_set>
#include <vector>

bool checkIfExistsNAndItsDouble(std::vector<int>& arr) {
    std::unordered_set<int> seen;

    for (int num : arr) {
        // Перевірка умови arr[i] == 2 * arr[j]
        if (seen.count(num * 2) || (num % 2 == 0 && seen.count(num / 2))) {
            return true;
        }

        seen.insert(num);
    }

    return false;
}

int main() {
    // Приклади використання:
    std::vector<int> arr1 = {10, 2, 5, 3};
    bool result1 = checkIfExistsNAndItsDouble(arr1);
    std::cout << "Приклад 1: " << (result1 ? "true" : "false") << std::endl;

    std::vector<int> arr2 = {3, 1, 7, 11};
    bool result2 = checkIfExistsNAndItsDouble(arr2);
    std::cout << "Приклад 2: " << (result2 ? "true" : "false") << std::endl;

    return 0;
}
