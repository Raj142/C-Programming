//Array elements in reverse order
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=n-1;i>=0;i--)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cout<<a[i]<<endl;
	return 0;
}
