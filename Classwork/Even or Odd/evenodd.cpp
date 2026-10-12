#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the Number:"<<endl;
    cin>>a;

    int remainder;
    remainder=a%2;
    
    if (remainder==0)
    {
        cout<<"The number is Even"<<endl;
    }
    else
    {
        cout<<"The number is Odd"<<endl;
    }
    
return 0;
}
