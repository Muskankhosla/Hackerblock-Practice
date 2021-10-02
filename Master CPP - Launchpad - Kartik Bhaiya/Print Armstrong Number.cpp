
#include<iostream>
#include<math.h>
using namespace std;

int noofdigits(int number)
{
    int digitcount=0;
    while(number!=0)
    {
        digitcount++;
        number/=10;
    }
    return digitcount;
}

int main()
{
    int n1, n2, n, num, temp, sum=0;
    cin>>n1>>n2;
    for(int i=n1; i<=n2; i++)
    {
        num=i; temp=num; sum=0;
        int dig=noofdigits(num);
        while(num!=0)
        {
            n=num%10;
            sum+=pow(n, dig);
            num=num/10;
        }
        if(sum==temp)
          cout<<temp<<endl;
    }
    return 0;
}
