#include <iostream>
#include <math.h>

using namespace std;

int checkpal(long n)
{
    long m=0,c=n;

    for(int i=5;c>0;i--)
    {
        m+=pow(10,i)*(c%10);
        c/=10;
    }

    if(m==n) return 1;
    else return 0;
}

int main()
{
    long largepal=1;
    for(int i=999;i>99;i--)
    for(int j=999;j>99;j--)
    {
        if(checkpal(i*j))
        {
            if(largepal<i*j)
            {
                largepal=i*j;
            }
        }
    }

    cout<<"The largest palindrome is"<<largepal;

    return 0;
}
