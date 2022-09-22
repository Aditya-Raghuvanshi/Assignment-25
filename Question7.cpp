/*Define a class Greatest and define instance member function to find Largest among
3 numbers using classes.*/
#include<iostream>
using namespace std;

class Greatest
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
    Greatest g1;
    g1.set_values(2,5,4);
    g1.find_larg();
    return 0;
}