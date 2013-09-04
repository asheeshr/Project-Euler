//Brute-force Approach

#include <iostream>

using namespace std;

int main()
{
    int a=0,b=1,c,sum=0;
    for(c=1;c<4000000;c=a+b,a=b,b=c)
    if(c%2==0)
    sum+=c;
    cout<<"The sum is"<<sum<<endl;
    cout<<sizeof(int);
    return 0;
}
