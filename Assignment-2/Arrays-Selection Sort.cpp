#include <bits/stdc++.h>
using namespace std;
void sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				swap(a[i],a[j]);
			}
		}
	}
}
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
    sort(a,n);
   for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
