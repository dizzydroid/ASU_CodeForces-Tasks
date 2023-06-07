#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void k_largest_elements(int arr[], int array_size, int k) {
    // Sort the array in non-decreasing order using the selection sort algorithm
    for (int i = 0; i < array_size - 1; i++) {
        int max_index = i;
        for (int j = i + 1; j < array_size; j++) {
            if (arr[j] > arr[max_index]) {
                max_index = j;
            }
        }
        swap(arr[i], arr[max_index]);
    }

    // Print the K largest elements
    for (int i = 0; i < k; i++) {
        if (i < array_size) {
            cout << arr[i] << " ";
        } else {
            cout << 0 << " ";
        }
    }
    cout << endl;
}

int main() {
    int array_size, k;
    cin >> array_size >> k;

    int arr[array_size];
    for (int i = 0; i < array_size; i++) {
        cin >> arr[i];
    }

    k_largest_elements(arr, array_size, k);

    return 0;
}
