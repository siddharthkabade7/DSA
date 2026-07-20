#include<iostream>
#include<vector>
using namespace std;

class mer2array(vector<int>& nums1,vctor<int>& nums2){
    vector<int> merged;
    int i=0;int j=0;

    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]<nums2[j]){
            pushback(nums1[i]);
            i++;
        }
        else{
            pushback(nums2[j]);
            j++;
        }
    }
    while (i < nums1.size()) {
            nums.push_back(nums1[i]);
            i++;
        }

        while (j < nums2.size()) {
            nums.push_back(nums2[j]);
            j++;
        }
}
int n = nums.size();

        if (n % 2 == 1) {
            return nums[n / 2];
        } else {
            return (nums[n / 2] + nums[n / 2 - 1]) / 2.0;
        }
    }
};

int main(){

    mer2array m;
    vector<int> nums1;

}

