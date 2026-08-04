#include<iostream>
using namespace std;

void insertationsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
    
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
}

}

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}


int main(){
    int arr[5]={1,3,2,4,5};
    int n=5;

    insertationsort(arr,n);
    printarr(arr,n);
}