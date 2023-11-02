 int i = n - 1; // Index of last element in arr1
    int j = 0;     // Index of first element in arr2

    while (i >= 0 && j < m) {
        if (arr1[i] > arr2[j]) {
            swap(arr1[i], arr2[j]);
            i--;
            j++;
        } else {
            break;
        }
    }

    // Sort both arrays for the final merged result
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}
