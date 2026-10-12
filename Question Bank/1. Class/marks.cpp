#include <iostream>
using namespace std;

class Marks
{
    private:
    float mfc, ep, eee;

    public:
    void accept()
    {
        cout<<"Enter the marks of MFC, EP and EEE respectively"<<endl;
        cin>>mfc>>ep>>eee;
    }
    void display()
    {
        cout<<"The Total Obtained are: "<<mfc+ep+eee<<endl;
        cout<<"The Average Marks are: "<<(mfc+ep+eee)/3<<endl;
    }
};

int main()
{
    Marks m;
    m.accept();
    m.display();
    return 0;
}
