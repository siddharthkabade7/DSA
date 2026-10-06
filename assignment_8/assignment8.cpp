#include<iostream>
using namespace std;

#define SIZE 5

class Queue{
    int queue[SIZE];
    int front, rear;
    public:
     Queue(){
        front = -1;
        rear = -1;
     }

     void enqueue(int order){
        if(rear == SIZE-1 ){
            cout<<"Queue is full !";
            return ;
        }

        if(front == -1){
            front = 0;
        }
        rear++;
        queue[rear]=order;

     }
     void dequeue(){
        if(front==-1||front>rear){
            cout<<"Queue is empty";
            return ;
        }
        cout<<"Processing order:"<<queue[front]<<endl;
        cout<<"Deleting order :"<<queue[front]<<endl;

        front++;

        if(front>rear){
            front = -1;
            rear=-1;
        }

    }
    void display(){
        if(front == -1||front>rear){
            cout<<"Queue is empty";
            return;
        }
        cout<<"Pending orders..";
        
        for(int i= front;i<=rear;i++){
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
       
       
};

int main(){
    Queue q;
    q.enqueue(101);
    q.enqueue(102);
    q.enqueue(103);

    q.display();

    q.dequeue();

    q.display();
}