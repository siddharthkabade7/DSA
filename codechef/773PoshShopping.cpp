#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t > 0) {
        int n;
        cin >> n;
        int c[n];
        for (int i = 0; i < n; i++) {
            cin >> c[i];
        }
        int max = c[0];
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (c[i] <= c[j]) {
                    if (max < c[i] + c[j]) {
                        max = c[i] + c[j];
                    }

                }
            }
        }
        cout << max << endl;
        t--;
    }

}