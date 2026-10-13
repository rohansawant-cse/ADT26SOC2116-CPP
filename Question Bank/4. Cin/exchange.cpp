#include <iostream>
using namespace std;

int main()
{
    int a,b, swap;
    cout<<"Enter the value of A and B"<<endl;
    cin>>a>>b;

    swap=a;
    a=b;
    b=swap;

    cout<<"The Value of A is "<<a<<endl;
    cout<<"The Value of B is "<<b<<endl;
    return 0;
}
