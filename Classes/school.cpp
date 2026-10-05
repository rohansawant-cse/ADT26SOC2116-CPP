#include <iostream>
using namespace std;

class School
{
    public:
    string name;
    string division;
    string roll;
};

int main()
{
    School details;
    details.name="Rohan";
    details.division="SOC-X";
    details.roll="XX";
    cout<<"Name: "<<details.name<<endl;
    cout<<"Division: "<<details.division<<endl;
    cout<<"Roll: "<<details.roll<<endl;

return 0;
}
