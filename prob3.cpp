#include <iostream>
#include <math.h>
using namespace std;

int mod(unsigned long div)
{
    long a=600851 , b=475143,c= 475143 ;
    int rem=a%div,j;
    for(j=0;c>0;c/=10,j++);
    b=b+rem*pow(10,j);
    rem=b%div;
    return rem;
}

int main()
{
    double n =  600851475143e0;
    long prime=1,pri2=1;
    int c=0;
    for(unsigned long i=2;i<=n;i++)
    {
        if(mod(i)==0)
        {
            cout<<i;
            c=0;
            for(unsigned long j=2, k=i, pri2=1;(j<=k)&&(c<1);j++)
            {
                if(i%j==0)
                {
                    pri2=j;
                    c++;
                    k/=pri2;
                    cout<<c;
                }
            }
            if(c==0)
            {
                prime=i;
                n/=prime;
            }
            cout<<prime<<endl;
        }
    }
    cout<<"Largest prime factor is "<<prime<<endl;
    return 0;
}
