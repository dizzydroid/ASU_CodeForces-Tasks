#include <iostream>
#include <cmath>
using namespace std;

int getAbsSum(int arr[], int size_arr) {
    int sum = 0;
    for (int i = 0; i < size_arr; i++) {
        sum += abs(arr[i]);
    }
    return sum;
}

int main() {
    int array_size;
    cin >> array_size;

    int array[array_size];
    for (int i = 0; i < array_size; i++) {
        cin >> array[i];
    }

    int abs_sum = getAbsSum(array, array_size);
    cout << abs_sum << endl;

    return 0;
}
