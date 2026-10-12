#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
    int empId;
    string name;
    float salary;

    public:
    void acceptDetails()
    {
        cout<<"Enter your Employee ID"<<endl;
        cin>>empId;
        cout<<"Enter your Name"<<endl;
        cin.ignore();
        getline(cin, name);
        cout<<"Enter your Salary Amount"<<endl;
        cin>>salary;
    }

    void displayDetails()
    {
        cout<<"Employee ID: "<<empId<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main()
{
    Employee e;
    e.acceptDetails();
    e.displayDetails();
    return 0;
}
