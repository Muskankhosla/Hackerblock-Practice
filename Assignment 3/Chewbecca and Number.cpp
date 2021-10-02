Sample Input
4545
Sample Output
4444
#include<iostream>
using namespace std;
int main() {
	int n,x,y,ans=0;
	cin>>n;
	while(n!=0)
	{
		x=n%10;
		y=9-x;
		if(y<x)
		{
			ans=ans*10+y;
		}
		else if (y>x)
		{
			ans=ans*10+x;
		}
        else if(y==0)
        {

        }
		n=n/10;
	}
	cout<<ans;
	return 0;
}
