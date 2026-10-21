#include<stdio.h>
using namespace std;
#pragma pack(1)
class Base
{
    public:
      int i,j;
        void fun()
          {cout<<"Base fun\n";}
          void gun()
          { cout<<"Base gun\n";}
          virtual void sun()
          {cout<<"Base sun\n";}
          virtual void run()
          { cout<<"Base run\n";}
};// 16
#pragma pack(1)
class Derived : public Base
{
    public:
          int x;
          void fun()
          {   cout<<"Derived fun\n";}
          void sun()
          {   cout<<"Derived sun\n";}
          virtual void mun()
          {   cout<<"Derived mun\n";}
          virtual void bun()
          {   cout<<"Base bun\n";}
          
};//20 bytes


int main ()
{
    Base *bp = new Derived();

    cout<<sizeof(Baseof)
    cout
    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
    bp->mun();  //error
    bp->bun();  //error

    

    return 0;

}