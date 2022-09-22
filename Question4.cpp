/*Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.*/
#include<iostream>
using namespace std;

class LargestNumber
{
    private:
       int a,b,c;
    public:
       void set_values(int x,int y,int z)
       {
        a=x; b=y; c=z;
       }   
       void find_larg()
       {
           int large = a>b?(a>c?a:c):(b>c?b:c);
           cout<<"Largest number is "<<large<<endl;
       }
};
int main()
{
    LargestNumber L1;
    L1.set_values(2,5,4);
    L1.find_larg();
    return 0;
}