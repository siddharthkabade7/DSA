#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

int main(){
    int n;
    cout<<"nodes :";
    cin>>n;

    node *head=NULL;
    node *tail=NULL;

    for(int i=0;i<n;i++){
        node *newnode=new node;
        cout<<"Enter data:";
        cin>>newnode->data;
        newnode->next=NULL;
    
    if(head==NULL){
        head=newnode;
        tail=newnode;

    }
    else{
        tail->next=newnode;
        tail=newnode;
    }

}

    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}