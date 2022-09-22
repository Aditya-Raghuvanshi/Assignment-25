/*Define a class Circle and define an instance member function to find the area of the
circle.*/
#include<iostream>
using namespace std;

class Circle
{
    float radius;
    public:
       void set_value(float r)
       {
         radius=r;
       }
       void area()
       {
           cout<<"Area of the circle is "<<3.14*radius*radius<<endl;
       }
};
int main()
{
    Circle C;
    C.set_value(2);
    C.area();
    return 0;
}