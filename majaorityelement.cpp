#include <iostream>
using namespace std;

void majorityelement(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > n / 2) {
            cout << "Majority Element: " << arr[i];
            return;
        }
    }

    cout << "No Majority Element";
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 2, 5, 2,2,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    majorityelement(arr, n);

    return 0;
}