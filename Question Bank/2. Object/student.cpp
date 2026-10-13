#include <iostream>
using namespace std;

class Student
{
    private:
    float mfc, ep, eee, total;

    public:
    void acceptDetails()
    {
        cout<<"Enter the Marks in MFC, EP, EEE, respectively"<<endl;
        cin>>mfc>>ep>>eee;
    }
    void calculateDetails()
    {
        total=mfc+ep+eee;
        cout<<"Total Marks Obtained: "<<total<<endl;
        cout<<"Percentage Obtained: "<<total/3<<endl;
    }
};

int main()
{
    Student s;
    s.acceptDetails();
    s.calculateDetails();
    return 0;
}
