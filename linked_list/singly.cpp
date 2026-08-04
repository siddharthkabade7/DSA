#include <iostream>
using namespace std;

struct node
{
public:
    int data;
    node *next; //
};

void basic()
{ // basic
    node *head = new node;
    node *second = new node;

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = NULL;

    // cout << head->data << " ";
    // cout << second->data << " ";

    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        // cout << temp->next << " ";
        temp = temp->next;
    }
    //insertation at beginning
    node*anode=new node;
    int a;
    cout<<"\nenter element for insertation at beginning: ";
    cin>>a;

    anode->data=a;
    anode->next=head;
    head = anode;

     node *temp1 = head;

    while (temp1 != NULL)
    {
        cout << temp1->data << " ";
        // cout << temp1->next << " ";
        temp1 = temp1->next;
    }
}

void Nnodes()
{
    int n;
    cout << "Enter desier nodes: ";
    cin >> n;
    node *head = NULL;
    node *tail = NULL;

    for (int i = 0; i < n; i++)
    {
        node *newnode = new node;
        cout << "enter data:";
        cin >> newnode->data;

        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    cout << "\n------linked lis is-----\n";
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertbeg(){
    


}

int main()
{
    // basic();

    Nnodes();

    // insertbeg();
    return 0;
}