#include<iostream>
#include<queue>
using namespace std;

int qfull(int *m,int *n)        //Check if queue is full
{
	int size=10;
	if(*m==((*n+1)%size))
	{
		return 1;		//ret true.
	}
	else
	{
	return 0;			//ret false.
	}
}

int qempty(int *m,int *n)       //Check if queue is empty
{
	if(*m==-1)
	return 1;
	else
	return 0;
}

void enqueue(int a[],int *m,int *n)
{	int size=10;
	if(qfull(m,n))
	{
		cout<<"Orders are Pending"<<endl;
	}
	else
	{
		if(*m==-1)
		{
			*m=0;
			*n=0;
			cin>>a[*n];
		}
		else
		{
			*n=(*n+1)%size;;
			cin>>a[*n];
		}
	}
}

void dequeue(int a[],int *m,int *n)
{	int size=10;
	int order;
	if(qempty(m,n))
	{
		cout<<"No orders are remain to serve"<<endl;
	}
	else
	{
		order=a[*m];
		if(*m==*n)
		{
			*m=-1;
			*n=-1;
		}
		else
		{
			*m=(*m+1)%size;
		}
		cout<<order<<"\tOrder Served"<<endl;
	}
}

int main()
{
	int front=-1;
 	int rear=-1;
 	int *m=&front;
 	int *n=&rear;
	int a[10],k,op;
	while(1){
	cout<<"Operations"<<endl;
	cout<<"1.Accept Order \t 2.Serve Order \t 3.Exit "<<endl;
	cin>>k;
	switch(k)
	{
	case 1:
        enqueue(a,m,n);
        break;
	case 2:
        dequeue(a,m,n);
        break;
    case 3:
        exit(0);
	default :
        cout<<"Incorrect wrong operation"<<endl;
	break;
	}
	}
	return 0;
}
