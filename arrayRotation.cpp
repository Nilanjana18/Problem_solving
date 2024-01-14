#include <vector>

std::vector<int> rotateArray(std::vector<int> arr, int d) {
    int n = arr.size();

    // Get the effective number of rotations:
    d = d % n;

    std::vector<int> temp(arr.begin(), arr.begin() + d);

    // Shift the elements to the left by d places in the given array:
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    // Place the elements of the temporary array in the last d places of the given array:
    for (int i = n - d; i < n; i++) {
        arr[i] = temp[i - (n - d)];
    }

    return arr;
}
