#include<iostream>
using namespace std;

class Sort{
public:
    struct data{      // structure to store the data
        int numbers;
        
    };
    private:
        data d[100];   //array of structure to store the data
        int n;         // number of elements in the array
    

    public:


void bubble_sort(){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(d[j].numbers > d[j + 1].numbers){
                swap(d[j],d[j+1]);
            }
        }
    }

}

void getdata(){
    
    cout<<"Enter number of student:";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter element :";
        cin>>d[i].numbers;
    }
}

void display(){
    for(int i=0;i<n;i++){
        cout<<d[i].numbers<<" ";
    }
    cout<<endl;
}


void selectionsort(){
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(d[j].numbers<d[min_index].numbers){
                min_index =j;
            }
            
        }
        swap(d[i],d[min_index]);
    }
}


};

int main(){
    Sort s;
    s.getdata();
    s.display();
    s.bubble_sort();
    s.display();
    s.selectionsort();
    s.display();
    return 0;
    
    
}