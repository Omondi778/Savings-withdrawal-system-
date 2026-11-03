C++
#include <iostream>
using namespace std;

int main()
{
    double balance, amount;

    cout << "Enter account balance: ";
    cin >> balance;

    while (balance > 0)
    {
        cout << "\nEnter withdrawal amount: ";
        cin >> amount;

        if (amount > balance)
        {
            cout << "Insufficient balance!" << endl;
            break;
        }

        balance = balance - amount;

        cout << "Withdrawal successful!" << endl;
        cout << "Remaining balance: KSh " << balance << endl;
    }

    cout << "\nThank you for using our service." << endl;

    return 0;
}
