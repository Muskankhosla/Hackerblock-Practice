#include<iostream>
using namespace std;
int main() {
	char n;
	cin>>n;
	if(n>='a'&&n<='z')
	{
		cout<<"lowercase";
	}
	else if(n>='A'&&n<='Z')
	{
		cout<<"UPPERCASE";
	}
	else
	cout<<"Invalid";
	return 0;
}
