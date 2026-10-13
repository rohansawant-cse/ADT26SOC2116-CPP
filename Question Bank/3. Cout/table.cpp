#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter a Number"<<endl;
    cin>>number;

    cout<<"---Table of "<<number<<"---"<<endl;
  
    for (int i=1; i<=10; i++)
    {
        cout<<number<<"x"<<i<<"="<<number*i<<endl;
    }
    return 0;
}
