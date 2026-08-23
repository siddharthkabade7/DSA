#include<iostream>
    using namespace std;
    struct Node{
    string Station;
    Node *prev;
    Node *next;
    };
    Node* head=NULL;
    Node* tail=NULL;

    void Insert_Station(){
    Node *newNode=new Node;
    cout<<"Enter name of new station: ";
    cin>>newNode->Station;
    if(head==NULL && tail==NULL){
        newNode->next=NULL;
        newNode->prev=NULL;
        head=tail=newNode;
    }
    else{
    newNode->next=NULL;
    newNode->prev=tail;
    tail->next=newNode;
    tail=newNode;
    }
    cout<<"Station Inserted."<<endl;
    }

    void Remove_Station(){
    string remove;
    cout<<"Enter name of station to be removed: ";
    cin>>remove;
    Node* temp=head;
    while(temp!=NULL && temp->Station!=remove){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"Station Not Found.";
        return; 
    }
    else if(head==tail){
        head=NULL;
        tail=NULL;
    }
    else if(temp==head){
        head=temp->next;
        head->prev=NULL;
    }
    else if(temp==tail){
        tail=temp->prev;
        tail->next=NULL;
    }
    else{
    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    }
    delete temp;
    cout<<"Station Deleted."<<endl;
    }

    void Search(){
    string search;
    cout<<"Enter Station Name: ";
    cin>>search;
    Node*temp=head;
    while(temp!=NULL){
        if(temp->Station==search){
        cout<<"Station found."<<endl;
        return;
        }
        temp=temp->next; 
    }
    cout<<"Station Not Found."<<endl;
    }

    void Display(){
    Node*temp=head;
    cout<<endl<<"Available Stations: "<<endl;
    while(temp!=NULL){
        cout<<temp->Station<<" ";
        temp=temp->next;
    }
    cout<<endl;
    }

    void Display_rev(){
    Node*temp=tail;
    cout<<endl<<"Stations in Reverse: "<<endl;
    while(temp!=NULL){
        cout<<temp->Station<<" ";
        temp=temp->prev;
    }
    cout<<endl;
    }

    int main(){
    int n;
    cout<<"Enter Number of Stations: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        Node *newNode = new Node;
        cout<<"Enter Station "<<i<<": ";
        cin>>newNode->Station;
        newNode->next=NULL;
        if(head==NULL){
        newNode->prev=NULL;
        head=tail=newNode;
        }
        else{
        newNode->prev=tail;
        tail->next=newNode;
        tail=newNode;
        }
    }

    int choice=0;
    cout<<endl;
    cout<<"Choose Operation: "<<endl;
    while(choice!=6){
        cout<<endl;
        cout<<"1.Insert a Station."<<endl;
        cout<<"2.Delete a Station."<<endl;
        cout<<"3.Display all Stations."<<endl;
        cout<<"4.Search a Station."<<endl;
        cout<<"5.Display Stations in Reverse Order."<<endl;
        cout<<"6.Exit"<<endl;
        cout<<"Enter Choice: ";
        cin>>choice;
        switch(choice) {
        case 1:Insert_Station();
            break;
        case 2:Remove_Station();
            break;
        case 3:Display();
            break;
        case 4:Search();
            break;
        case 5:Display_rev();
            break;
        case 6:cout<<"Exiting...";
            break;
        default:cout<<"Invalid Choice.";
    }
    }
    return 0;
    }