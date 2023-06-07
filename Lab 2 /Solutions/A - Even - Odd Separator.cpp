#include <iostream>

using namespace std;

void separate_even_odd(int arr[], int array_size) {
    int even_array[array_size];
    int odd_array[array_size];
    int even_count = 0, odd_count = 0;

    for (int i = 0; i < array_size; i++) {
        if (arr[i] % 2 == 0) {
            even_array[even_count++] = arr[i];
        } else {
            odd_array[odd_count++] = arr[i];
        }
    }

    // Print even array
    for (int i = 0; i < even_count; i++) {
        cout << even_array[i] << " ";
    }
    cout << endl;

    // Print odd array
    for (int i = 0; i < odd_count; i++) {
        cout << odd_array[i] << " ";
    }
    cout << endl;
}

int main() {
    int array_size;
    cin >> array_size;

    int arr[array_size];
    for (int i = 0; i < array_size; i++) {
        cin >> arr[i];
    }

    separate_even_odd(arr, array_size);

    return 0;
}
