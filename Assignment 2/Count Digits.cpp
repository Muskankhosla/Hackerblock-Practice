 Print the number of times digit is found in the number. Print the value returned.
Sample Input
5433231 
3
Sample Output
3

#include<iostream>
using namespace std;
int main() {
	int n,x,k;
	int count=0;
	cin>>n;
	cin>>k;
	while(n!=0)
	{
		x=n%10;
			n=n/10;
		if(x==k)
		{
			count++;
		}
		

	}
	cout<<count<<endl;
	return 0;
}
