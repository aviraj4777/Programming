#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Stack
{
private:
    vector<T> arr;
    int top;
    int size;

public:
    vector<T> arr;
    int top;
    int size;
    
    Stack(int size)
    {
        this->size = size;
        arr.resize(size);
        top = -1;
    }

    void push(T element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
            cout << "Stack is empty" << endl;
    }

    T top()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
            return false;
    }
};
int main()
{
    system("cls");
    Stack<int> st(5);
    st.push(5);
    st.push(6);
    st.push(7);
    cout<<st.top();
    return 0;
}