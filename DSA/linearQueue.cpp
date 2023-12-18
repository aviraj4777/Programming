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
};
class queue
{

public:
    Node *front;
    Node *rear;
    queue()
    {
        front = rear = NULL;
    }
    void push(int ele)
    {
        Node *n1 = new Node(ele);
        if (!n1)
        {
            cout << "Queue overflow" << endl;
        }
        else
        {
            if (front == NULL)
            {
                rear = n1;
                front = n1;
            }
            else
            {
                rear->next = n1;
                rear = n1;
            }
        }
    }
    bool isEmpty()
    {
        if (front == NULL)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int peek()
    {
        if (!isEmpty())
        {
            return front->data;
        }
        return -1;
    }
    void pop()
    {
        if (!isEmpty())
        {
            front = front->next;
        }
        else
        {
            cout << "Queue Underflow" << endl;
        }
    }
};

int main()
{
    queue q;
    cout << "Aviraj Kumar \nUID:- 21BCS10973 \n\n";

    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);

    if (q.isEmpty())
        cout << "Queue is Empty";
    else
        cout << "Queue is not Empty" << endl;

    cout << "The front element of Queue is " << q.peek() << endl;
    q.pop();
    cout << "After Deletion, the front element of Queue is " << q.peek() << endl;

    return 0;
}
