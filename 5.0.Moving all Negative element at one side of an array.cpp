#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements for the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Separate positive and negative elements
    vector<int> positive, negative;
    for (int i = 0; i < n; ++i) {
        if (arr[i] >= 0) {
            positive.push_back(arr[i]);
        } else {
            negative.push_back(arr[i]);
        }
    }

    // Copy positive elements back to the original array
    int idx = 0;
    for (int i = 0; i < positive.size(); ++i) {
        arr[idx++] = positive[i];
    }

    // Copy negative elements back to the original array
    for (int i = 0; i < negative.size(); ++i) {
        arr[idx++] = negative[i];
    }

    cout << "Modified array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
