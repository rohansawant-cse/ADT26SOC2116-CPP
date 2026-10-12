#include <iostream>
using namespace std;

class Rectangle
{
    private:
    float length, breadth;

    public:
    void accept()
    {
        cout<<"Enter the Length of Rectangle"<<endl;
        cin>>length;
        cout<<"Enter the Breadth of Rectangle"<<endl;
        cin>>breadth;
    }
    void calculate()
    {
        cout<<"The Area of the Rectangle is: "<<length*breadth<<endl;
    }
};

int main()
{
    Rectangle r;
    r.accept();
    r.calculate();
    return 0;
}
