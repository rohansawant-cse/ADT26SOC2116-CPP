#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
    int rollnumber;
    string name;
    float marks [3];
    float total;
    float percentage;
    string result;

    public:
    void acceptData()
    {
        cout<<"Enter the Roll Number:"<<endl;
        cin>>rollnumber;
        cout<<"Enter Name:"<<endl;
        cin.ignore();
        getline(cin, name);
        cout<<"Enter the marks for 3 subjects:"<<endl;
        for (int i=0; i<3; i++)
        cin>>marks[i];
    }

    void calculateResults()
    {
        total=0;
        for (int i=0; i<3; i++)
        {
            total += marks[i];
        }
        percentage=total/3.0;
        
        if (percentage>=60) result="First Class";
        else if (percentage>=50) result="Second Class";
        else if (percentage>=40) result="Pass";
        else result="Fail";
    }
    
    void displayDetails()
    {
        cout<<"-----Student Details-----"<<endl;
        cout<<"Roll Number: "<<rollnumber<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: ";
        for (int i=0; i<3; i++)
        {
            cout<<marks[i]<<" "<<endl;
        }
        cout<<"Total Marks: "<<total<<endl;
        cout<<"Percentage: "<<percentage<<"%"<<endl;
        cout<<"Result: "<<result<<endl;
    }
};

int main()
{
    Student s;
    s.acceptData();
    s.calculateResults();
    s.displayDetails();

return 0;
}
