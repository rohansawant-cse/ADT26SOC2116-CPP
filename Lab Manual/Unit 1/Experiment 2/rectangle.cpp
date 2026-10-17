#include <iostream>
using namespace std;

class Rectangle
{
    private:
    float length;
    float breadth;

    public:
    void setDimensions(float l,float b)
    {
        length=l;
        breadth=b;
    }
    
    float area();
    float perimeter();
    void display();
};

float Rectangle::area()
    {
        return length*breadth;
    }
float Rectangle::perimeter()
    {
        return 2*(length+breadth);
    }

void Rectangle::display()
    {
        cout<<"Length: "<<length<<endl;
        cout<<"Breadth: "<<breadth<<endl;
        cout<<"Area: "<<area()<<endl;
        cout<<"Perimeter: "<<perimeter()<<endl;
    }

int main()
{
    Rectangle r;
    float l,b;
    cout<<"Enter the Length and Bread of Rectangle"<<endl;
    cin>>l>>b;

    r.setDimensions(l,b);
    r.display();

    return 0;
}
