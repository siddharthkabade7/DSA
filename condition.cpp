#include<iostream>

// int main(){
//     using namespace std;
//     int n=10;
//     if(n>=0){
//         cout<<"positive"<<"\n";
//     }
//     else if(n<0){
//         cout<<"negative"<<"\n";
//     }
//     else{
//         cout<<"zero"<<"\n";
//     }
//     return 0;
// }

// int main(){
//     using namespace std;
//     char ch;
//     cout<<"enter a character : ";
//     cin>>ch;
//     if(ch>='a' && ch<='z'){
//         cout<<"lowercase"<<"\n";
//     }
//     else if(ch>='A' && ch<='Z'){
//         cout<<"uppercase"<<"\n";
//     }
//     else{
//         cout<<"not an alphabet"<<"\n";
//     }
//     return 0;
// }

// int main(){
//     using namespace std;
//     char ch;
//     cout<<"enter a character : ";
//     cin>>ch;
//     if(ch>=97 && ch<=122){
//         cout<<"lowercase"<<"\n";
//     }
//     else if(ch>=65 && ch<=90){
//         cout<<"uppercase"<<"\n";
//     }
//     else{
//         cout<<"not an alphabet"<<"\n";
//     }
//     return 0;
// }

// int main(){
//     using namespace std;
//     int n=45;
//     n>=0?cout<<"positive"<<"\n":cout<<"negative"<<"\n";  
//     return 0;
// }


// loops

//while

// int main(){
//     using namespace std;
//    int i=0;         //initilization
//    while(i<=10){    //condition
//     cout<<i<<"\n";  //body
//     i++;            //increment

//    }
//     return 0;
// }

//practice

// int main(){
//     using namespace std;
//     int n;
//     cout<<"enter a number : ";
//     cin>>n;
//     for(int i=n;i<=10*n;i++){
//         if(i%n==0){
//             cout<<i<<"\n";
//         }
//     }
//     return 0;
// }

// int main(){
//     using namespace std;
//     int n;
//     cin>>n;
//     int i= n;
//     while(i<=10*n){
//         if(i%n==0){
//             cout<<i<<"\n";
//         }
//         i++;    
//     }
//     return 0;
// }
// int main(){
//     using namespace std;
//     int n=16;
//     cout<<"factorial of n"<<n<<"\n";
//     long long fact =1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     cout<<"factorial is : "<<fact<<"\n";
// return 0;
// }

//nested loop
using namespace std;
int main(){
    
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}