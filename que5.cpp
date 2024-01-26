// Input : 20
// Output : 2   4   10  20
#include<iostream>
using namespace std;

class Number
{
    public:
        void DisplayEvenFactor(int iNo)
        {
            int iCnt = 0;
            for(iCnt=1;iCnt<iNo;iCnt++)
            {
                if((iNo%iCnt)==0)
                {
                    if((iCnt%2)==0)
                    {
                        cout<<iCnt<<"\n";
                    }
                }
            }
        }
};
int main()
{
    int iValue = 0;

    cout<<"Enter the number:\n";
    cin>>iValue;

    Number obj;
    obj.DisplayEvenFactor(iValue);
    return 0;
}