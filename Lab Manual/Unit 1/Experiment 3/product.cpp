#include <iostream>
#include <string>
using namespace std;

class Product
{
    private:
    string prodName;
    int prodId;
    float price;
    int monthlysales[12];
    int totalQuantity;
    float totalBill;

    public:
    void acceptDetails()
    {
        cout<<"Enter the Product Name: "<<endl;
        cin.ignore();
        getline(cin, prodName);
        cout<<"Enter the Product ID: "<<endl;
        cin>>prodId;
        cout<<"Enter the Price per Unit: "<<endl;
        cin>>price;
        cout<<"Enter the Monthly Sales of 12 Months: "<<endl;
        totalQuantity=0;
        for (int i=0; i<13; i++)
        {
            cin>>monthlysales[i];
            totalQuantity += monthlysales[i];
        }
        totalBill=totalQuantity*price;
    }

    void displayDetails()
    {
        cout<<"Product Name: "<<prodName<<endl;
        cout<<"Product ID: "<<prodId<<endl;
        cout<<"Product Unit Price: "<<price<<endl;
        cout<<"Total Quantity Sold: "<<totalQuantity<<endl;
        cout<<"Total Bill: "<<totalBill<<endl;
        cout<<"---------------------"<<endl;
    }

    float getTotalBill() const
    {
        return totalBill;
    }

};

int main()
{
    int n;
    cout<<"Enter the Number of Products: "<<endl;
    cin>>n;

    Product products[100];
    float grandTotal = 0;

    for (int i=0; i<n; i++)
    {
        cout<<"----Product "<<(i+1)<<" Details----"<<endl;
        products[i].acceptDetails();
        grandTotal += products[i].getTotalBill();
    }
    cout<<"----All Product Details----"<<endl;
    for (int i=0; i<n; i++)
    {
        products[i].displayDetails();
    }
    cout<<"Grand Total Bill: "<<grandTotal<<endl;
    cout<<"---------------------"<<endl;
    return 0;
}
