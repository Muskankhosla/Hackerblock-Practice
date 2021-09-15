#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    //p tracks record of previous element
    //e is the current element
    int e,p,inc=0;
    //the first element
    cin>>p;
    n--;
    while(n>0){
        cin>>e;
        //As for strictly increasing function, equal values at adjacent position is not accepted
        if(e==p){
            cout<<"false";
            return 0;
        }
        // in case, there is a decrease after an increase in the sequence
        if(e<p && inc==1){
            cout<<"false";
            return 0;
        }
        //once the sequence start increasing mark it by setting inc as 1.
        else if(e>p){
            inc=1;
        }
        //make current account as previous
        p=e;
        //decrement n
        n--;
    }
    //if all goes correct, print true
    cout<<"true";
	return 0;
}
