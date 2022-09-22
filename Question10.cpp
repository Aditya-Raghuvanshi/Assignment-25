/*Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc.*/
#include<iostream>
using namespace std;

class Area
{
    float side,length,breadth,radius;
    public:
       void input_S()
       {
        cout<<"Enter value of side of square ";
        cin>>side;
       }
       void input_LB()
       {
        cout<<"Enter value of length and breadth of rectangle ";
        cin>>length>>breadth;
       }
       void input_R()
       {
        cout<<"Enter value of radius of circle ";
        cin>>radius;
       }
       void area_S()
       {
        cout<<"Area of square is "<<side*side<<endl;
       }
       void area_R()
       {
        cout<<"Area of rectangle is "<<(length)*(breadth)<<endl;
       }
       void area_C()
       {
        cout<<"Area of circle is "<<3.14*radius*radius<<endl;
       }
};
int main()
{
    Area a1,a2;
    a1.input_R();
    a2.input_S();
    a1.area_C();
    a2.area_S();
    return 0;
}