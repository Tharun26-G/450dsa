#include <iostream>
#include <vector>

std::vector<int> intersection(int a[], int n, int b[], int m) {
    std::vector<int> intersectionVec;

    // Iterate through array 'a'.
    for (int i = 0; i < n; ++i) {
        // Check if the current element in 'a' is present in array 'b'.
        for (int j = 0; j < m; ++j) {
            if (a[i] == b[j]) {
                // If it is, add it to the intersection vector.
                intersectionVec.push_back(a[i]);
                // Break out of the inner loop as the element is already found.
                break;
            }
        }
    }

    return intersectionVec;
}

int main() {
    // Example usage of the intersection function
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int b[] = {3, 4, 5, 6, 7};
    int m = sizeof(b) / sizeof(b[0]);

    std::vector<int> intersectionResult = intersection(a, n, b, m);

    // Output the intersection elements
    std::cout << "Intersection of the two arrays: ";
    for (int i = 0; i < intersectionResult.size(); ++i) {
        std::cout << intersectionResult[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
