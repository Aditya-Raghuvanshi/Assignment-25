/*Define a class Rectangle and define an instance member function to find the area of
the rectangle.*/
#include<iostream>
using namespace std;

class Rectangle
{
    float Length,breadth;
    public:
       void set_value(float x,float y)
       {
        Length=x; breadth=y;
       }
       void area()
       {
           cout<<"Area of the rectangle is "<<Length*breadth<<endl;
       }
};
int main()
{
    Rectangle r;
    r.set_value(3.0,4.5);
    r.area();
    return 0;
}