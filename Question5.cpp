/*Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class.*/
#include<iostream>
using namespace std;

class ReverseNumber
{
    public :
       void rev_num(int n)
       {
         int i,s=0;
         
         while(n!=0)
         {
            s=s*10+n%10;
            n=n/10;
         }
         cout<<"Reverse of the given number is "<<s<<endl;
       }
};
int main()
{
    ReverseNumber r;
    r.rev_num(123);
}