#include<iostream>
using namespace std;

class Display
{
    public:
        int i;

        Display()
        {
            i = 0;
            cout<<"Inside constructor\n";
        }
        void Print()
        {
            for(i=5;i>=1;i--)
            {
                cout<<i<<"\n";
            }
        }
};

int main()
{
    Display obj;

    obj.Print();
    return 0;
}