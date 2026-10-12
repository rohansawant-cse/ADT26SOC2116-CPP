#include <iostream>
using namespace std;

class BankAccount
{
    private:
    int accountnumber;
    string holdername;
    float balance;

    public:
    void accept()
    {
        cout<<"Enter your Account Number"<<endl;
        cin>>accountnumber;
        cout<<"Enter your Account Holder Name"<<endl;
        cin>>holdername;
        cout<<"Enter your Balance"<<endl;
        cin>>balance;
    }
    void display()
    {
        cout<<"-----Bank Account Details-----"<<endl;
        cout<<"Account Number: "<<accountnumber<<endl;
        cout<<"Account Holder Name: "<<holdername<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};

int main()
{
    BankAccount a;
    a.accept();
    a.display();
    return 0;
}
