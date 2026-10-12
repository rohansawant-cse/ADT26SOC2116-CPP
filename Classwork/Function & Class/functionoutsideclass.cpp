#include <iostream>
using namespace std;

class Function
{
    public:
    void outsidefunction();
};

void Function::outsidefunction()
{
    cout<<"Hello World!"<<endl;
}

int main()
{
    Function object;
    object.outsidefunction();

return 0;
}
