/*
In C++, the std::set and std::map are containers that store their elements in sorted order, based on a comparison criterion. By default, they use the less-than (<) operator for ordering. However, you can customize the ordering by providing a custom comparator.

Why Use Custom Comparators?
Change Sorting Order: To sort elements in descending order or any non-standard order.
Custom Logic: For complex objects, you might want to define sorting based on specific fields or custom rules.
Eliminate Ambiguity: If you don't want to rely on the default comparison logic for user-defined types.
Syntax for Custom Comparators
A custom comparator can be implemented as:

A function object (functor).
A lambda function (introduced in C++11).
A function pointer.
Custom Comparator for std::set
Here's an example of using a custom comparator for a std::set:
*/


#include <iostream>
#include <set>

struct CustomComparator {
    bool operator()(int a, int b) const {
        // Sort in descending order
        return a > b;
    }
};

int main() {
    std::set<int, CustomComparator> customSet = {5, 1, 4, 3, 2};

    for (int x : customSet) {
        std::cout << x << " ";
    }
    // Output: 5 4 3 2 1
    return 0;
}
