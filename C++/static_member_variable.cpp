#include <iostream>
using namespace std;
class Account
{
private:
    int balance;      // Instance member variable
    static float roi; // Static member variable / class variable
public:
    void setBalance(int b)
    {
        balance = b;
    }
};
float Account::roi = 3.5f;
int main()
{
    system("cls");
    Account a1, a2;
    return 0;
} 