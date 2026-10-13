#include <iostream>
#include <string>
using namespace std;

class Mobile
{
    private:
    string brand, model;
    float price;
    int storage;

    public:
    void acceptDetails()
    {
        cout<<"Enter the Mobile Brand"<<endl;
        getline(cin, brand);
        cout<<"Enter the Mobile Model"<<endl;
        getline(cin, model);
        cout<<"Enter the Mobile Storage"<<endl;
        cin>>storage;
        cout<<"Enter the Mobile Price"<<endl;
        cin>>price;
    }
    void displayDetails()
    {
        cout<<"------Mobile-----"<<endl;
        cout<<"Brand: "<<brand<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Storage: "<<storage<<"GB"<<endl;
        cout<<"Price: "<<price<<endl;
    }
};

int main()
{
    Mobile m;
    m.acceptDetails();
    m.displayDetails();
    return 0;
}
