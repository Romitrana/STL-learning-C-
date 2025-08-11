#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_multiset<int> ums;

    // Insert elements (including duplicates)
    ums.insert(10);
    ums.insert(20);
    ums.insert(10);
    ums.insert(30);
    ums.insert(20);

    // Print all elements
    std::cout << "Elements in unordered_multiset:\n";
    for (int x : ums) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    // Count occurrences of an element
    std::cout << "Count of 10: " << ums.count(10) << "\n";

    // Erase all occurrences of 20
    ums.erase(20);

    // Erase only one occurrence of 10
    auto it = ums.find(10);
    if (it != ums.end()) {
        ums.erase(it);
    }

    std::cout << "After deletion:\n";
    for (int x : ums) {
        std::cout << x << " ";
    }

    return 0;
}
