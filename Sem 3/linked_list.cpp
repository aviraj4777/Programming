#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};
void insertAtBegin(Node* &head, int value)
{
    Node *temp = new Node(value);
    temp->next = head;
    head = temp;
}

void insertAtEnd(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    if (position == 1)
    {
        insertAtBegin(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at Last Position
    if (temp->next == NULL)
    {
        insertAtEnd(tail, d);
        return;
    }

    // creating a node for d
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;

    temp->next = nodeToInsert;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void deleteNode(int position, Node *&head)
{

    // deleting first or start node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free start ndoe
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

bool search(Node *head, int key)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
int main()
{
    cout << "Creating First Node " << endl;
    Node *node1 = new Node(5);
    Node *head = node1;
    Node *tail = node1;
    print(head);

    while (1)
    {
        cout << "\nPerforming operations on Linked Lists." << endl;
        cout << endl
             << "---------------------------------" << endl;
        cout << "1.Insert a new element" << endl
             << "2.Delete an existing element" << endl
             << "3.Search an Element" << endl
             << "4.Display all element" << endl
             << "5.Exit " << endl
             << "Enter choice : ";

        int choice;
        cin >> choice;

        switch (choice)

        {
        case 1:
            cout << "\nInserting at Beginning of List " << endl;
            insertAtBegin(head, 7);
            insertAtBegin(head, 8);
            print(head);

            cout << "\nInserting at End of List " << endl;
            insertAtEnd(tail, 9);
            insertAtEnd(tail, 11);
            print(head);

            cout << "\nInserting at a position of List " << endl;
            insertAtPosition(tail, head, 3, 6);
            insertAtPosition(tail, head, 6, 10);
            print(head);

            break;

        case 2:
            cout << "\n\nDeletion at Begining of List ";
            cout << "\nBefore Deletion " << endl;
            print(head);

            deleteNode(1, head);

            cout << "\nAfter Deletion " << endl;
            print(head);

            cout << "\n\nDeletion at Middle/End of List ";
            cout << "\nBefore Deletion " << endl;
            print(head);

            deleteNode(5, head);

            cout << "\nAfter Deletion " << endl;
            print(head);
            break;

        case 3:
            cout << "\nSearching an Element in List " << endl;
            int element;
            cout << "Enter the element to search " << endl;
            cin >> element;
            if (search(head, element))
                cout << "Element Found " << endl;
            else
                cout << "Element not Found " << endl;

            break;

        case 4:
            cout << "\nPrinting the List " << endl;
            print(head);
            break;

        case 5:
            cout << "Exit the list" << endl;
            exit(1);
            break;
        default:

            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}