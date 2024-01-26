// Accept one number from user and print that number of even numbers on screen.
// Input : 5
// Output : 2   4   6   8   10
#include<iostream>
using namespace std;

class Number 
{
    private:
        int iNo;
    public:
        Number(int x)
        {
            iNo = x;
        }
        void PrintEven()
        {
            int iCnt = 0;

            if(iNo<0)
            {
                iNo = -iNo;
            }
            for(iCnt=2;iCnt<=(iNo*2);iCnt++)
            {
                if((iCnt%2)==0)
                {
                    cout<<iCnt<<"\n";
                }
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the number:\n";
    cin>>iValue;

    Number nobj(iValue);
    nobj.PrintEven();
    return 0;
}