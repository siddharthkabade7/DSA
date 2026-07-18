#include<iostream>
using namespace std;

// void printhello(){
//     cout<<"hello world";    
// }

// void sum(int n){
//     int sum =0;
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     cout<<sum<<endl;
// }

// void fact(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact *=i;
//     }
//     cout<<fact<<endl;
// }
// void sumofdigits(int n){
//     int sum=0;
//     while(n>0){
//         int lastdigit = n%10;
//         sum +=lastdigit;
//         n=n/10;

//     }
//     cout<<sum;
// }


// int main(){
//     int n=153;
//     sumofdigits(n);    
//     return 0;
// }



// int ncr(int n, int r) {
//     int fact_n = 1, fact_r = 1, fact_n_r = 1;

//     if (n < r) {
//         cout << "n should be greater than or equal to r";
//         return 0;
//     }
//     else if (n == 0 || r == 0) {
//         return 1;
//     }
//     else {
//         for (int i = 1; i <= n; i++) {
//             fact_n *= i;
//         }

//         for (int i = 1; i <= r; i++) {
//             fact_r *= i;
//         }

//         for (int i = 1; i <= n - r; i++) {
//             fact_n_r *= i;
//         }

//         return fact_n / (fact_r * fact_n_r);
//     }
// }

// int main() {
//     int n, r,result;
//     cin >> n >> r;

//     result = ncr(n, r);
//     if(result != 0){
//         cout << "nCr(" << n << ", " << r << ") = " << result << endl;
//     }

//     return 0;
// }

//

void p(int n) {
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " ";
        }
    }
}

int main() {
    int n = 100;
    p(n);

    return 0;
}

