//ATM system
#include<iostream>
#include<cassert>
#include<cstdlib>
using namespace std;
const int RAND = rand();

class Account
{
private:
    long accountNo;
    double balance;
    static int uniq;
public:
    Account(double);
    Account(const Account &) = delete;
    ~Account();
    void checkBalance() const;
    void deposit(double);
    void withdraw(double);
};

int Account ::uniq = 0;

Account ::Account(double bal)
    : balance(bal)
{
    if(bal < 0)
    {
        cout << "Negative balance entered!\nCannot continue." << endl;
        assert(false);
    }
    uniq++;
    accountNo = RAND + uniq;
    cout << "Account #" << accountNo << " is opened." << endl;
    cout << "Balance: \u20B9" << balance << endl << endl;
}
Account ::~Account()
{
    cout << "Account #" << accountNo << " is closed." << endl;
    cout << "\u20B9" << balance << " was sent to the customer." << endl << endl;
}
void Account ::checkBalance() const
{
    cout << "Account: #" << accountNo << endl;
    cout << "Transaction: Balance check" << endl;
    cout << "Balance: \u20B9" << balance << endl << endl;
}
void Account ::deposit(double amount)
{
    if(amount >= 0)
    {
        balance += amount;
        cout << "Account: #" << accountNo << endl;
        cout << "Transaction: Deposit of \u20B9" << amount << endl;
        cout << "Balance: \u20B9" << balance << endl << endl;
    }
    else
        cout << "Amount cannot be negative!" << endl << endl;
}
void Account ::withdraw(double amount)
{
    if(amount >= 0 && balance >= amount)
    {
        balance -= amount;
        cout << "Account: #" << accountNo << endl;
        cout << "Transaction: Withdrawal of \u20B9" << amount << endl;
        cout << "Balance: \u20B9" << balance << endl << endl;
    }
    else if(amount < 0)
        cout << "Amount cannot be negative!" << endl << endl;
    else
        cout << "Invalid transaction." << endl << endl;
}

int main()
{
    double bal, amt; bool flag = true; unsigned short choice;
    do
    {
        cout << "Enter balance: ";
        cin >> bal;
        Account account(bal);
        do
        {
            cout << endl << "====== MENU ======\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n\nEnter choice: ";
            cin >> choice;
            switch(choice)
            {
            case 1:
                account.checkBalance();
                break;
            case 2:
                cout << "Enter amount: ";
                cin >> amt;
                account.deposit(amt);
                break;
            case 3:
                cout << "Enter amount: ";
                cin >> amt;
                account.withdraw(amt);
                break;
            case 4:
                break;
            default:
                cout << "Invalid choice." << endl << endl;
            }
        } while (choice != 4);
        cout << "New transaction? [0/1]: ";
        cin >> noboolalpha >> flag;
    } while(flag != false);
    return 0;
}