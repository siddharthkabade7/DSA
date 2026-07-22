#include<iostream>
using namespace std;

class SelectionSortExample {
    public:
    int arr[5]={1,4,2,5,3};
    int n=5;


void selectionSort() {
    for(int i=0;i<n;i++){
        int minindex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;

            }
        }
        swap(arr[i],arr[minindex]);
    }
}

void printArray() {
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
};
int main(){
    SelectionSortExample s;
    cout<<"Array before sorting: ";
    s.printArray();
    s.selectionSort();
    cout<<"Array after sorting: ";
    s.printArray();
    return 0;
}