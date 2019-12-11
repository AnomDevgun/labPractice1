/*
PROGRAM BY ANOM DEVGUN
GR: 21810017
Successfully implemented various string operations using pointers.
use of switch case.
*/
#include<iostream>
#include<string.h>
using namespace std;
class str
{
private :
    int i,j;
public:
    int len(char *);
    void rev(char *);
    void cop(char *,char *);
    void com(char *,char *);
    void con(char *,char *);
};
int str::len(char *p)
{
int l=0;
while(*p!='\0')
{
    l++;
    p++;
}
return l;
}
void str::rev(char *p)
{
int len=strlen(p);
char *ept,*bpt,c;
bpt=p;
ept=p;
for(i=0;i<len-1;i++)
{
    ept++;
}
for(i=0;i<len/2;i++)
{
    c=*ept;
    *ept=*bpt;
    *bpt=c;
    bpt++;
    ept--;
}
}
void str::cop(char *p,char *q)
{
    while(*p!='\0')
    {
        *q=*p;
        p++;
        q++;
    }
}
void str::com(char *p,char *q)
{
int flag=0;
    while(*p == *q)
    {
        if(*p=='\0'&&*q=='\0')
            flag=1;
            p++;
            q++;
    }
    if(flag==1)
        cout<<"The Strings are equal\n";
    else if(flag==0)
        cout<<"The Strings are unequal\n";
}
void str::con(char *p,char *q)
{
    char cd[100];
    char *cp;
    cp=cd;
    while(*p!='\0')
    {
        *cp=*p;
        cp++;
        p++;
    }
    while(*q!='\0')
    {
        *cp=*q;
        cp++;
        q++;
    }
    *cp='\0';
    cout<<"Concatenated string is :\n"<<cd<<"\n";
}
int main()
{
    int ch;
    str obj;
    char st1[50],st2[50]=" ";
    int l1;
    while(1)
    {
    cout<<"\nEnter 1 for finding input string length\n";
    cout<<"Enter 2 for reversing input string \n";
    cout<<"Enter 3 for copying input string\n";
    cout<<"Enter 4 for comparing 2 input strings\n";
    cout<<"Enter 5 for concatenation of 2 input strings\n";
    cout<<"Enter 6 to exit\n";
    cin>>ch;
    switch(ch)
    {
    case '0':
        exit(0);
        break;
        case 1:
                cout<<"Enter The String\n";
                cin>>st1;
                l1=obj.len(st1);
                cout<<"The Length of Input String is:"<<l1<<"\n";
                break;
        case 2:
                cout<<"Enter String to be reversed\n";
                cin>>st1;
                obj.rev(st1);
                cout<<st1;
                break;
        case 3:
                cout<<"\nEnter the String to be copied\n";
                cin>>st1;
                cout<<"\nString 2 before copying:"<<st2<<"\n";
                obj.cop(st1,st2);
                cout<<"String 2 after copying :"<<st2<<"\n";
                break;
        case 4:
                cout<<"Enter The 2 Strings to be compared\n";
                cin>>st1>>st2;
                obj.com(st1,st2);
                break;
        case 5:
                cout<<"Enter the strings to concat \n";
                cin>>st1>>st2;
                obj.con(st1,st2);
                break;
        case 6:
            cout<<"Now Exiting.\n";
            exit(0);
            break;
        default:
            cout<<"\nInvalid Choice\n";
    }
    }
    return 0;
}

