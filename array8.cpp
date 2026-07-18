// #include<iostream>

// using namespace std;

// // int fun_linearsearch(int arr[], int n){
// //     for(int i=0;i<n;i++){
// //         if(arr[i]==3){
// //             cout<<"3 is present";
// //             return arr[i];
// //         }
        
// //     }
// //     return -1;
// // }
// int reverse(int arr[], int n){
//     for(int i=n-1;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }
// }




// int main(){
//     int arr[]={1,2,3,4,5,4,5,6,7,44,23};
//     int n = 11,result;
//     // result=fun_linearsearch(arr, n);
//     // cout<<"\nindex is "<<result;

//     result=reverse(arr, n);
    


//     return 0;
// }

#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n - 1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;

    reverse(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}