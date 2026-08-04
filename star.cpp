// #include<iostream>
// using namespace std;

// void printnumberandalpha(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             if(i%2==0){
//                 cout<<j+1;
//             }
//             else{
//                 char ch='A';
//                 cout<<ch+j;
//             }
//         }
//     }

    
// }

// int main(){
//     int n=4;
//     printnumberandalpha(n);
//     return 0;
// }

#include <iostream>
using namespace std;

void print_min_number(int arr[],int n){

    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Minimum number in the array is: "<<min;
}

int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    print_min_number(arr,n);
    return 0;
}