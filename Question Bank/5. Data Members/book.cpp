#include <iostream>
#include <string>
using namespace std;

class Book
{
    private:
    string title, author;
    int isbn;
    float price;

    public:
    void acceptDetails()
    {
        cout<<"Enter the Book Title"<<endl;
        getline(cin, title);
        cout<<"Enter the Book Author Name"<<endl;
        getline(cin, author);
        cout<<"Enter the Book ISBN No."<<endl;
        cin>>isbn;
        cout<<"Enter the Book Price"<<endl;
        cin>>price;
    }
    void displayDetails()
    {
        cout<<"-----Book-----"<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"ISBN No.: "<<isbn<<endl;
        cout<<"Price: "<<price<<endl;
    }
};

int main()
{
    Book b;
    b.acceptDetails();
    b.displayDetails();
    return 0;
}
