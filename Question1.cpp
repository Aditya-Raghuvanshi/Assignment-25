/*Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number*/
#include<iostream>
using namespace std;

class Complex
{
    private:
       int a,b;
    public:
       void set_data(int x,int y)
       {
            a=x; b=y;
       }
       void get_data()
       {
        cout<<"a="<<a<<" and b="<<b<<"i"<<endl;
       }

};
int main()
{
    Complex c1,c2;
    c1.set_data(2,3);
    c2.set_data(3,4);
    c1.get_data();
    c2.get_data();
    
}