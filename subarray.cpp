#include<iostream>
using namespace std;

// // void print_subarrray(int arr[], int n){
// //     for(int st=0;st<n;st++){
// //         for(int end=st;end<n;end++){
// //             for(int i=st;i<=end;i++){
// //                 cout<<arr[i];
// //             }
// //             cout<<" ";
// //         }
// //         cout<<endl;
// //     }

// // }

// void max_sum_subarray(int arr[], int n){
//     int max_sum=arr[0];
//     for(int st=0;st<n;st++){
//         int csum=0;
//         for(int end=st;end<n;end++){
//             csum+=arr[end];
//             max_sum=max(max_sum,csum);
//         }
//     }
//     cout<<max_sum<<endl;
// }
// int main(){
//     int n=8;
//     int arr[]={1,2,4,5,-5,-3,-2,-1};
//     max_sum_subarray(arr,n);
// }

void kandanes_algorithm(int arr[], int n){
    int cs =0,maxsum=0;
    for(int i=0;i<n;i++){
        cs+=arr[i];
        maxsum=max(cs,maxsum);
        if(cs<0){
            cs = 0;
        }
    }
    cout<<maxsum;
}
int main(){
    int arr[] = {3,-4,5,4,-1,7,-8};
    int n= sizeof(arr)/sizeof(1);

    kandanes_algorithm(arr,n);

}

