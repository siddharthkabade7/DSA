#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int n;
	    cin>>n;
	    int a[n];
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int max=a[0];
	    int min=a[0];
	    for(int i=0;i<n;i++){
	        if(max<a[i]){
	            max=a[i];
	        }
	        if(min>a[i]){
	            min=a[i];
	        }
	    }
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(a[i]>min && a[i]<max){
	            count++;
	        }
	        
	    }
	    cout<<count<<endl;
	    t--;
	}

}
