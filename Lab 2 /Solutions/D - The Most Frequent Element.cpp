#include <iostream>
using namespace std;


int most_frequent_element(int A[], int n) {
    int f, max_f = 0, most_freq_num;
    for (int j = 0; j < n; j++) {
        f = 0;
        for (int k = 0; k < n; k++) {
            if (A[j] == A[k]) {
                f++;
            }
        }
        if (f > max_f) {
            max_f = f;
            most_freq_num = A[j];
        }
    }
    return most_freq_num;
}

int main() {
    int a[50] = { 0 };
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << most_frequent_element(a, n);
    return 0;
}
