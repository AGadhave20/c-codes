#include<iostream>
using namespace std;

class Array
{
    private:
        int *Arr;
        int iSize;
    public:
        Array(int x)
        {
            iSize = x;
            Arr = new int[iSize];
        }
        ~Array()
        {
            delete []Arr;
        }
        void Accept()
        {
            int iCnt = 0;
            cout<<"Please enter number:\n";
            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        void Display()
        {
            cout<<"Elements of the array:\n";
            int iCnt = 0;
            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<endl;
        }

};
int main()
{
    int iLength = 0;
    cout<<"Enter number of elements that you want to enter:\n";
    cin>>iLength;
    Array obj(iLength);
    obj.Accept();
    obj.Display();
    return 0;
}