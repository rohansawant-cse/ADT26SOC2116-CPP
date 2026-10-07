#include <iostream>
using namespace std;

class Function
{
    public:
    void insidefunction()
    {
        cout<<"Hello World!"<<endl;
    }
};

int main()
{
    Function object;
    object.insidefunction();

return 0;
}
