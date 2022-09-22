/*Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.*/
#include<iostream>
using namespace std;

class Square
{
    private:
       int a;
    public:
       void set_value(int x)
       {
           a=x;
       }
       void find_square()
       {
         cout<<"Square of "<<a<<" is "<<a*a<<endl;
       }   
};
int main()
{
    Square s;
    s.set_value(5);
    s.find_square();
    return 0;
}