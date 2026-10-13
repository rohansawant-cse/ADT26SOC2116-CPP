#include <iostream>
using namespace std;

class Time
{
    private:
    int hours,minutes,seconds;

    public:
    void acceptData()
    {
        cout<<"Enter Hours, Minutes and Seconds"<<endl;
        cin>>hours>>minutes>>seconds;
    }
    void displayData()
    {
        cout<<"The Time is "<<hours<<" hours, "<<minutes<<" minutes and "<<seconds<<" seconds."<<endl;
    }
};

int main()
{
    Time t;
    t.acceptData();
    t.displayData();
    return 0;
}
