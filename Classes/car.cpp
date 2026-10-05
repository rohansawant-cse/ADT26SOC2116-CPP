#include <iostream>
using namespace std;

class Car
{
    public:
    string brand;
    string model;
};

int main()
{
    Car mycar;
    mycar.brand="Koenigsegg";
    mycar.model="Jesko";
    cout<<"Car Brand: "<<mycar.brand<<endl;
    cout<<"Car Model: "<<mycar.model<<endl;

return 0;
}
