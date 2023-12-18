#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Stack
{
private:
    int topIndex;
    T *arr;
    int n;

public:
    Stack(int size)
    {
        n = size;
        topIndex = -1;
        arr = new T[n];

        cout << "Stack created with items limit: " << size << endl;
    }

    void push(T item)
    {
        if (topIndex < n - 1)
        {
            arr[++topIndex] = item;
            cout << "Pushed " << item << " to Stack." << endl;
            return;
        }
        cout << "Stack is Full." << endl;
    }

    void pop()
    {
        if (topIndex == -1)
        {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Popped " << arr[topIndex--] << " from Stack." << endl;
    }

    T top()
    {
        if (topIndex == -1)
        {
            cout << "Stack is empty" << endl;
            return 0;
        }
        return arr[topIndex];
    }
    void isEmpty()
    {
        if (topIndex == -1)
            cout<<"Stack is empty"<<endl;
        else
            cout<<"Stack is not empty"<<endl;
    }
    void isFull() {
         if (topIndex == n - 1)
            cout<<"Stack is Full"<<endl;
        else
            cout<<"Stack is not full"<<endl;
    }
};

int main()
{
    Stack<char> st(5);
    st.isEmpty();
    st.push('a');
    st.push('b');
    st.push('c');
    
    cout<<"The top of stack is "<<st.top()<<endl;
    st.push('d');
    st.push('e');
    st.isFull();
    st.pop();
    return 0;
}