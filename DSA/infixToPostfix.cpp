#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    char *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new char[size];
        top = -1;
    }

    void push(int element)
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

    int peek()
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

int prec(char x)
{
    if (x == '^')
        return 3;
    else if (x == '/' || x == '*')
        return 2;
    else if (x == '+' || x == '-')
        return 1;
    else
        return -1;
}

void infixPostfix(string s)
{

    Stack *st = new Stack(100);

    string ans;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            ans += ch;
        }

        else if (ch == '(')
        {
            st->push('(');
        }

        else if (ch == ')')
        {
            while (st->peek() != '(')
            {
                ans += st->peek();
                st->pop();
            }
            st->pop();
        }

        else
        {
            while (!st->isEmpty() && prec(s[i]) <= prec(st->peek()))
            {
                ans += st->peek();
                st->pop();
            }
            st->push(ch);
        }
    }

    while (!st->isEmpty())
    {
        ans += st->peek();
        st->pop();
    }

    cout << "Postfix expression : \n"
         << ans << "\n";
}

int main()
{

    cout << "Aviraj Kumar \nUID - 21BCS10973 \n\n";
    string exp = "a+b*(c^d-e)^(f+g*h)-i";
    cout << "Given infix expression : \n"
         << exp << "\n\n";

    infixPostfix(exp);

    return 0;
}

