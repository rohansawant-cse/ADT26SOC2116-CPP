#include <iostream>
using namespace std;

class Circle
{
    private:
    float radius;

    public:
    void accept()
    {
        cout<<"Enter the Radius of the Circle"<<endl;
        cin>>radius;
    }
    void calculate()
    {
        cout<<"Circumeference of the Circle is: "<<2*3.14*radius<<endl;
        cout<<"Area of the Circle is: "<<3.14*(radius)*(radius)<<endl;
    }
};

int main()
{
    Circle c;
    c.accept();
    c.calculate();
    return 0;
}
