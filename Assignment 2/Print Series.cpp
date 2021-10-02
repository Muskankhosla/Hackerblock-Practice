Write a function which prints first N1 terms of the series 3n + 2 which are not multiples of N2.
Sample Input
10 
4
Sample Output
5 
11 
14 
17 
23 
26 
29 
35 
38 
41
  
  
  
#include<iostream>
int main() {
	int n,x=0,n1,n2;
	n=1;
	scanf("%d\n%d",&n1,&n2);
	 while(n1!=0)
	{
			x=3*n+2;
			n+=1;
	       if(x%n2==0)
		   {
			   continue;
		    }
		 
          else
		   printf("%d\n",x);
		  n1=n1-1;
	}
		

	return 0;
}
