#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter your Marks"<<endl;
    cin>>a;

    if (a>=90 & a<=100)
    {
        cout<<"Outstanding!"<<endl;
    }
    else if (a>=80 & a<=90)
    {
        cout<<"Amazing!"<<endl;
    }
    else if (a>=70 & a<=80)
    {
        cout<<"Great!"<<endl;
    }

    return 0;
}
