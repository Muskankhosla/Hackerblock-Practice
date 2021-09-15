#include <bits/stdc++.h>
using namespace std;
int kthLargest(int arr[], int n, int k)
{
    sort(arr, arr + n);
    return arr[n-k];
}
int main() {
	int n;
	cin>>n;
	int k;
	cin>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<kthLargest(a,n,k);
	return 0;
}
