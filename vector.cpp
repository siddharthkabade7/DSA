#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec={1,2,3,4,5};
    vector<char> vec2={'q','w','e'};
    // for(int i : vec){
    //     cout<<i<<endl;
    // }
    // for(char j : vec2){
    //     cout<<j<<endl;
    // }
    // vec.push_back(6);
    // for(int i : vec){
    //     cout<<i<<endl;
    // }   
    // vec.pop_back();
    // for(int i : vec){
    //     cout<<i<<endl;
    // } 

    cout<<vec.front()<<endl;
    
    cout<<vec.back()<<endl;
    cout<<vec.at(2)<<endl;

    cout<<vec.size()<<endl;

    return 0;
}