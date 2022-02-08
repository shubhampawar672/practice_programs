#include <iostream>

using namespace std;
int addDigits(int num)
{

if(num==0)
            return 0;
        int n=0;
        while(num>9)
        {
            while(num>0)
            {
                 n+=num%10;
                num/=10;
            }
            num=n;
            n=0;
        }
return num;
}


int main()
{
    cout<<addDigits(388675);
    return 0;
}
