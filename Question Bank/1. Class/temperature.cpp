#include <iostream>
using namespace std;

class Temperature
{
    private:
    float celsius, fahrenheit;

    public:
    void accept()
    {
        cout<<"Enter the Temperature in Celsius"<<endl;
        cin>>celsius;
    }
    void convert()
    {
        fahrenheit=((celsius*9)/5)+32;
        cout<<"The Temperature in Fahrenheit is: "<<fahrenheit<<"F" <<endl;
    }
};

int main()
{
    Temperature d;
    d.accept();
    d.convert();
    return 0;
}
