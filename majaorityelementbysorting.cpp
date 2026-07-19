#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int majorityelement(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        int freq = 1;
        int ans = nums[0];

        for (int i = 0; i < n - 1; i++) {

            if (nums[i] == nums[i + 1]) {
                freq++;
            } else {
                freq = 1;
                ans = nums[i + 1];
            }

            if (freq > n / 2) {
                return ans;
            }
        }

        return -1; // No majority element
    }
};

int main() {
    Solution s;

    vector<int> nums;

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    int result = s.majorityelement(nums);

    if (result == -1)
        cout << "No Majority Element";
    else
        cout << "Majority Element = " << result;

    return 0;
}