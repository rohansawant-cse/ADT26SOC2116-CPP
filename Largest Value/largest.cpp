#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the value of A, B and C"<<endl;
    cin>>a>>b>>c;

  if (a>b)
  {
    if (a>c)
    {
        cout<<"A is the largest value"<<endl;
    }
    else
    {
        cout<<"B is the largest value"<<endl;
    }
  }

  else
  {
    if (b>c)
    {
        cout<<"B is the largest value"<<endl;
    }
    else
    {
        cout<<"C is the largest value"<<endl;
    }
  }
 return 0;
}
