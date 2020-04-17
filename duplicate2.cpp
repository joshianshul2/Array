#include<iostream>
#include<algorithm>
using namespace std;

void input(int *a,int n)
{
	cout<<"Enter a no in Array\n";
	for(int i=0;i<n;i++)
		{
		cin>>a[i];	
		}
}
int main()
{
	int ans=0,n;
	cout<<"Entrer no of Elements"<<endl;
	cin>>n;
	int a[n];
	input(a,n);
	sort(a,a+n);
	for(int i=0;i<n-1;i++)
	{
			if(a[i]==a[i+1])
			{
				cout<<"Required Reults Is. "<<a[i]<<endl;
			}
		}
		//o(n) complexity
}