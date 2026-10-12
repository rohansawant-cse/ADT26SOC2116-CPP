#include <iostream>
using namespace std;

class Rectangle
{
  private:
  float length, breadth;

  public:
  void accept()
  {
    cout<<"Enter the Length and Breadth of Rectangle"<<endl;
    cin>>length>>breadth;
  }
  void calculate()
  {
    cout<<"Perimeter of the Rectange: "<<2*(length+breadth)<<endl;
    cout<<"Area of the Rectangle: "<<length*breadth<<endl;
  }
};

int main()
{
  Rectangle r;
  r.accept();
  r.calculate();
  return 0;
}
