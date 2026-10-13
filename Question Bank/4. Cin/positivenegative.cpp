#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a Number"<<endl;
    cin>>num;

    if (num>=0)
    {
        if (num==0)
        {
            cout<<"The Number is Zero"<<endl;
        }
        else
        {
            cout<<"The Number is Positive"<<endl;
        }
    }
    else
    {
        cout<<"The Number is Negative"<<endl;
    }
    return 0;
}
