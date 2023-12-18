#include <iostream>
using namespace std;
class Queue
{
public:
    int front;
    int rear;
    int *arr;
    int size;

    Queue(int size)
    {
        front = rear = 0;
        this->size = size;
        arr = new int[size];
    }
    void enQueue(int x) {
        if (rear == size - 1) 
            cout<<"Queue overflow"<<endl;

        else {
            arr[rear++] = x;
        }
    }
    bool isEmpty() {
        if (front == rear) {
            return true;
        }
        else
            return false;
    }
    int getFront() {
        if (!isEmpty()) {
            return arr[front];
        }
        else
            return -1;
    }
    void deQueue() {
        if (!isEmpty()) {
            front++;
            if (front == rear) {
                front = rear = -1;
            }
        }
        else
            cout<<"Queue underflow"<<endl;
    }
};
int main()
{
    system("cls");
    Queue *q = new Queue(5);
    q->enQueue(5);
    q->enQueue(6);
    q->enQueue(7);
    q->enQueue(8);
    cout<<q->getFront()<<endl;
    q->deQueue();
    cout<<q->getFront()<<endl;
    cout<<"Empty or not "<<q->isEmpty();

    return 0;
}