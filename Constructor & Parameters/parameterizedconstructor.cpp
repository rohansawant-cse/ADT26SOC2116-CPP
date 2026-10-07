#include <iostream>
using namespace std;

class Laptop
{
    public:
    Laptop(string brand)
    {
        cout<<"Laptop Brand: "<<brand<<endl;
    }
};

int main()
{
    Laptop mylaptop("Dell");
    return 0;
}
