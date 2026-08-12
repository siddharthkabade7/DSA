#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int n,m;
    cout<<"first index :";
    cin>>n;
    cout<<"last index :";
    cin>>m;
    int sum =0;
    for(int i=n;i<=m;i++){
        sum += arr[i];
    }
    cout<<"sum of elements from index "<<n<<" to "<<m<<" is : "<<sum<<endl;
    return 0;
}