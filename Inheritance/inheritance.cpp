#include <iostream>
using namespace std;

class Vehicle
{
    public:
    Vehicle()
    {
        cout<<"This is a vehicle"<<endl;
    }
};

class Car:public Vehicle
{
    public:
    Car()
    {
        cout<<"This vehicle is a Car"<<endl;
    }
};

int main()
{
    Car object;
    return 0;
}
