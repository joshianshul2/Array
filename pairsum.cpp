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
	int ans=0,n,m;
	cout<<"Entrer no of Elements"<<endl;
	cin>>n;
	cout<<"Enter a Pair Sum "<< endl;
	cin>>m;
	int a[n];
	input(a,n);
	sort(a,a+n);
	int i=0,j=n-1;
	while(i<n)
	{
		
		if(a[i]+a[j]==m)
		{
			if(a[i]<a[j])
			{
			cout<<"Required Sum "<<a[i]<<" "<<a[j]<<endl;
				i++;
				j--;
		}	
	}
		else 
			i++;
	}
	
	return 0;
}