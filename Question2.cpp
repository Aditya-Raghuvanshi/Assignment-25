/*Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.*/
#include<iostream>
using namespace std;

class Time
{
    private :
       int hr,min,sec;
    public :
       void set_time(int x,int y,int z)
       {
          sec=z%60;
          z=z/60;
          min=y%60+z;
          y=y/60;
          hr=x+y;
       }
       void show_time()
       {
        cout<<hr<<"hr "<<min<<"min "<<sec<<"sec "<<endl;
       }
};
int main()
{
    Time t1;
    t1.set_time(4,100,100);
    t1.show_time();
          
}