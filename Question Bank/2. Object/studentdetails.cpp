#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
    string name;
    int rollNo;
    float marks;
    
    public:
    void acceptDetails()
    {
        cout<<"Enter your Name"<<endl;
        getline(cin, name);
        cout<<"Enter your Roll No."<<endl;
        cin>>rollNo;
        cout<<"Enter your Marks"<<endl;
        cin>>marks;
    }

    void displayDetails()
    {
        cout<<"----------Student Details----------"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No.: "<<rollNo<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main()
{
    Student s;
    s.acceptDetails();
    s.displayDetails();
    return 0;
}
