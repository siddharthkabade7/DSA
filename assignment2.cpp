#include <iostream>
using namespace std;
 
struct Contact             // create structure Contact
{
    string name;
    string phone;
};                         

class PhoneBook             // create class phonebook
{
    Contact c[50];
    int n;

public:
    // Accept Contact Details
    void accept()
    {
        cout << "\nEnter Number of Contacts: ";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cout << "\nEnter Details of Contact " << i + 1 << endl;
            cout << "Name : ";
            cin >> c[i].name;
            cout << "Phone : ";
            cin >> c[i].phone;
        }
    }

    // Display Contacts
    void display()
    {
        cout << "\n----- PHONE BOOK -----\n";

        for (int i = 0; i < n; i++)
        {
            cout << "\nName  : " << c[i].name;
            cout << "\nPhone : " << c[i].phone << endl;
        }
    }

    // Bubble Sort
    void sortContacts()
    {
        Contact temp;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (c[j].name > c[j + 1].name)
                {
                    temp = c[j];
                    c[j] = c[j + 1];
                    c[j + 1] = temp;
                }
            }
        }
    }

    // Linear Search
    void linearSearch()
    {
        string key;
        cout << "\nEnter Contact Name: ";
        cin >> key;

        for (int i = 0; i < n; i++)
        {
            if (c[i].name == key)
            {
                cout << "\nContact Found";
                cout << "\nName  : " << c[i].name;
                cout << "\nPhone : " << c[i].phone << endl;
                return;
            }
        }

        cout << "\nContact Not Found.\n";
    }

    // Binary Search
    void binarySearch()
    {
        sortContacts();       // for binary search we need to sort first so use sortContact function 

        string key;
        cout << "\nEnter Contact Name: ";
        cin >> key;

        int low = 0, high = n - 1;

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (c[mid].name == key)
            {
                cout << "\nContact Found";
                cout << "\nName  : " << c[mid].name;
                cout << "\nPhone : " << c[mid].phone << endl;
                return;
            }
            else if (key > c[mid].name)
                low = mid + 1;
            else
                high = mid - 1;
        }

        cout << "\nContact Not Found.\n";
    }
};

int main()
{
    PhoneBook pb;
    int ch;

    do    // do while loop for printing menu atleast 1 time 
    {
        cout << "\n\n===== PHONE BOOK MENU =====";
        cout << "\n1. Accept Contacts";
        cout << "\n2. Display Contacts";
        cout << "\n3. Linear Search";
        cout << "\n4. Binary Search";
        cout << "\n5. Exit";
        cout << "\nEnter Choice: ";
        cin >> ch;

        switch (ch)       // swithc cases for desire function calling
        {
        case 1:
            pb.accept();
            break;

        case 2:
            pb.display();
            break;

        case 3:
            pb.linearSearch();
            break;

        case 4:
            pb.binarySearch();
            break;

        case 5:
            cout << "\nThank You!";
            break;

        default:
            cout << "\nInvalid Choice!";
        }

    } while (ch != 5);

    return 0;
}