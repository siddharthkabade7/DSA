#include<iostream>
using namespace std;


    struct node{
        int data;
        node* next;
    };

    int main(){
        node* head=new node;
        node* second=new node;

        head ->data=20;
        second->data=30;

        head->next=second;
        second->next=NULL;

        node* newnode=new node;
        newnode -> data=10;
        newnode->next=head;
        head=newnode;

        node* temp=head;

        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
return 0;

    }

