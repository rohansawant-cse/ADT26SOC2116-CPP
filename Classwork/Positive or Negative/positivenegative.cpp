#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the Number"<<endl;
    cin>>a;
    
    if (a>0)
    {
        cout<<"The number is Positive"<<endl;
    }
    else if (a==0)
    {
        cout<<"The number is Neither Positive Nor Negative"<<endl;
    }
    else if (a<0)
    {
        cout<<"The number is Negative"<<endl;
    }

    return 0;
}
