#include <iostream>
using namespace std;

class Calculator
{
    private:
    int a,b;

    public:
    void accept()
    {
        cout<<"Enter the Numbers"<<endl;
        cin>>a>>b;
    }
    void calculate()
    {
        cout<<"-----Calculator-----"<<endl;
        cout<<"Addition: "<<a+b<<endl;
        cout<<"Subtraction: "<<a-b<<endl;
        cout<<"Multiplication: "<<a*b<<endl;
        cout<<"Division: "<<a/b<<endl;
        cout<<"---------------------"<<endl;
    }
};

int main()
{
    Calculator c;
    c.accept();
    c.calculate();
    return 0;
}
