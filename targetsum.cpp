#include<iostream>
#include<vector>
using namespace std;

void targetsum(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                return;
            }
        }
    }
    cout<<"No such pair found"<<endl;

    
}

int main(){
    int arr[]={2,7,11,15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target=9;
    targetsum(arr,n,target);
    return 0;
}