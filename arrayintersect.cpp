#include<iostream>
#include<algorithm>
using namespace std;

void input(int *a,int *b,int m,int n)
{
	cout<<"Enter a no in 1st Array\n";
	for(int i=0;i<m;i++)
		{
		cin>>a[i];	
		}
		cout<<"Enter a no in 2nd Array\n";
		for(int i=0;i<n;i++)
			{
			cin>>b[i];	
			}
}
// Aproch is a when smaller increment the no and if same print;
int main()
{
	int ans=0,n,m;
	cout<<"Entrer no of Elements"<<endl;
	cin>>m;
	cout<<"Entrer no of Elements"<<endl;
	cin>>n;
	int a[n],b[n];
	input(a,b,m,n);

	sort(a,a+m);
	sort(b,b+n);
// This case is only apply for same no of values; 
//for(int i=0;i<n;i++)
// 	{
// 		for(int j=0;j<n;j++)
// 		{
// 			if(a[i]==b[j])
// 			{
// 				cout<<"Elements Are : "<<a[i]<<endl;
// 			}
// 		}
// 	}
	int i=0,j=0;
	while(i<m && j<n)
	{
		if(a[i]>b[j])
			j++;
		else if(a[i]<b[j])
			i++;
		else
		{
			cout<<"Elements Are : "<<a[i]<<endl;
			i++;
			j++;
		}
	}
	
	
	
	
	
	
	
	
}