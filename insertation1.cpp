#include<iostream>
using namespace std;

void insertation(int arr,int n){
    for(int i=0;i<n;i++){
        int curr=arr[i];
        int prev = i-1;

        while (prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}

int main(){
    int arr[5]={1,4,2,5,3};
    int n=5;
    insertation(arr,n);
}