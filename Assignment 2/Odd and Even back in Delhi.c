Sample Input
2
12345
12134
Sample Output
Yes
No

#include<stdio.h>
void main()
{
    int n,rem,t;
    scanf("%d",&t);
    while(t--)
	{ int sume=0,sumo=0;
    scanf("%d",&n);
    while(n!=0)
	{ 
        rem=n%10;
        n=n/10;
        if(rem%2==0){
            sume+=rem;
        }
        else
        sumo+=rem;
    }
    if(sumo%3==0 || sume%4==0)
     printf("yes\n") ;
    else
    printf("no");
    }
}
