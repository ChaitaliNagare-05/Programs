#include<iostream>
using namespace std;
class PPA
{
    public:
        int No1;
        int No2;

        // Default Constructor
         PPA(
            {
                cout<<"Inside Default Constructor\n";
            }
            ~PPA()
            {
                cout<<"Inside destructor\n";
            }
         );

        void Display()
        {
            cout<<"Inside Display\n";
        }



};

int main()
{
    PPA pobj1;        //Default 
    PPA pobj2(11,21);    // Parameterised
    PPA pobj3(pobj1);      // Copy

    PPA pobj;

    


    return 0;

}