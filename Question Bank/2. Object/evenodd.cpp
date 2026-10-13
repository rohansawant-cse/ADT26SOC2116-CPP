#include <iostream>
using namespace std;

class Number
{
    private:
    int number, remainder;

    public:
    void accept()
    {
        cout<<"Enter the Number"<<endl;
        cin>>number;
    }
    void calculate()
    {
        remainder=number%2;
        if (remainder==0)
        {
            cout<<"The Number is Even"<<endl;
        }
        else
        {
            cout<<"The Number is Odd"<<endl;
        }
    }
};

int main()
{
    Number n;
    n.accept();
    n.calculate();
    return 0; 
}
