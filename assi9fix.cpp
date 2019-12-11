#define SIZE 50
#include<iostream>            
#include <ctype.h>
using namespace std;
char s[SIZE];
int top=-1;       //Global declarations
char push(char elem)
{                       //Push onto stack
    s[++top]=elem;
}
char pop()
{                      //Pop from stack
    return(s[top--]);
}
int pr(char elem)	//Check operator priority
{                
    switch(elem)
    {
    case '#': return 0;
    case '(': return 1;
    case '+':
    case '-': return 2;
    case '*':
    case '/': return 3;
    }
}
int main()
{        
    char infix[50],postfix[50],ch,elem;
    int i=0,k=0;
    printf("\n\nEnter Infix Expression : ");
    cin>>infix;
    push('#');
    while( (ch=infix[i++]) != '\0')
    {
        if( ch == '(') 
        	push(ch);
        else
            if(isalnum(ch)) 
            	postfix[k++]=ch;
            else
                if( ch == ')')
                {
                    while( s[top] != '(')
                        postfix[k++]=pop();
                    elem=pop(); 			// Remove (
                }
                else
                {       				//Operator priority check 
                    while( pr(s[top]) >= pr(ch) )
                        postfix[k++]=pop();
                    push(ch);
                }
    }
    while( s[top] != '#')     //Pop till stack empty
        postfix[k++]=pop();
    postfix[k]='\0';          //Last elem of char sting null for making it a valid string
    cout<<"\nPostfix Expression =  "<<postfix<<"\n";
    return 0;
}
