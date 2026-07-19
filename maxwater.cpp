#include<iostream>
#include<vector>
using namespace std;

int main(){
    class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0;
        for(int i=0;i<height.size();i++){
            for(int j=i+1;j<height.size();j++){
                int w = j-i;
                int area = min(height[i],height[j])*w;
                maxwater = max(maxwater,area);
            }
        }
        return maxwater;
    }
   
};

}