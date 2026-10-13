#include <iostream>
using namespace std;

class Distance
{
    private:
    int meter;

    public:
    void acceptData()
    {
        cout<<"Enter the Distance in Meters"<<endl;
        cin>>meter;
    }
    void calculate()
    {
        cout<<"The Distance is "<<meter/1000<<"km and "<<meter%1000<<"m."<<endl;
    }
};

int main()
{
    Distance d;
    d.acceptData();
    d.calculate();
    return 0;
}
