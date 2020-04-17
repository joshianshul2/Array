#include<iostream>
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
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				cout<<"Required Reults Is. "<<a[j]<<endl;
			}
		}
	}
}