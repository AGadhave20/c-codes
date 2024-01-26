// print * on screen
#include<iostream>
using namespace std;

class Display
{
    public:

        Display()
        {
            cout<<"Inside constructor\n";
        }
        void Print(int iNo)
        {
            while(iNo > 0)
            {
                cout<<"*\n";
                iNo--;
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter number\n";
    cin>>iValue;

    Display obj;

    obj.Print(iValue);
    return 0;
}