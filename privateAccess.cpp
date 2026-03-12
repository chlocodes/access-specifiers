#include <iostream>
using namespace std;

class BankAccount //name of class
{

private:
    double balance;//private variable

public:
    void deposit(double amt) //giving the data type
    {
        balance+=amt;
    }
    double getBalance()
    {


        return balance;
    }
};
int main()
{
    BankAccount bal;
//    cout<<bal.balance;
    bal.deposit(4500);
    cout<<bal.getBalance();
}
