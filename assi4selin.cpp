/*
PROG BY ANOM DEVGUN
GR: 21810017
*/
#include<iostream>
using namespace std;
void dispa(int A[],int n)
{
    int l=0;
    for(l=0;l<n;l++)
    {
        cout<<A[l]<<" ";
    }
}
int main()
{
char ch;
int n,i=0,j=0,ke=0,k=0;
int temp=0,min=0;
cout<<"Enter the number of elements you want in array:\n";
cin>>n;
int a[n];
cout<<"Enter "<<n<<" numbers\n";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"1)For selection sorting the input data:\n";
cout<<"2)For insertion sorting the input data:\n";
cout<<">>";
cin>>ch;
switch (ch)
{
case '1':
		for(i=0;i<n-1;i++)
		{
			min=i;
			for(j=i+1;j<n;j++)
			{
				if(a[j]<a[min])
				{
				min=j;
				}
			}
				temp=a[min];
				a[min]=a[i];
				a[i]=temp;
		for(k=0;k<n;k++)
		{
			cout<<a[k]<<" ";
		}
	cout<<"\n";
		}
break;
case '2':
    cout<<a[0]<<"\n";
		for(i=1;i<n;i++)
		{
			ke=a[i];
			j=i-1;
				while(j>=0 && a[j]<ke)
				{
				a[j+1]=a[j];
				j=j-1;
				}
			a[j+1]=ke;
			dispa(a,i+1);
				cout<<"\n";
		}

break;
}
return 0;
}
