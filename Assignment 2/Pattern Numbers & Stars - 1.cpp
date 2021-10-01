Sample Input
5
Sample Output
1 2 3 4 5
1 2 3 4 * 
1 2 3 * * *
1 2 * * * * *
1 *
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n; //take input from user

    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    for(int L=1;L<=n-1;L++)
    {
        for(int no=1;no<=n-L;no++)
        {
            cout<<no<<" ";
        }
        for(int star=1;star<=2*L-1;star++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}
