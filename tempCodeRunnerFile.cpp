#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

// Create Linked List
void createList(node *&head, node *&tail)
{
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    head = NULL;
    tail = NULL;

    for (int i = 0; i < n; i++)
    {
        node *newnode = new node;

        cout << "Enter data: ";
        cin >> newnode->data;
        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode; // [head]----->[tail(newnode ka address)]
            tail = newnode;       //[tail ko newnode assign karo]
        }
    }
}

// Display Linked List
void display(node *head)
{
    cout << "\nLinked List: ";

    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

// Insert at Beginning
void insertBeg(node *&head, int value)
{
    node *newnode = new node;

    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

// insert at end

void insertEnd(node *&head, node *&tail, int value)
{
    node *newnode = new node;
    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    createList(head, tail);

    display(head);

    int value,value1;
    cout << "\nEnter value to insert at beginning: ";
    cin >> value;

    insertBeg(head, value);

    display(head);

    cout << "\nEnter value to insert at beginning: ";
    cin >> value1;

    insertEnd(head, value1);

    display(head);

    return 0;
}