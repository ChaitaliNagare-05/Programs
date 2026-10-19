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
            PPA (int a, intb)
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
    PPA pobj1;
    PPA pobj2(11,21);

    PPA pobj;

    


    return 0;

}