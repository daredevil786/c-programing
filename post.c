#define SIZE 50            
#include <ctype.h>
int s[SIZE];
int top=-1;       
push (intelem)
{                       
 s[++top]=elem;
}
int pop()
{                      
 return(s[top--]);
}
main()
{                         
 char pofx[50],ch;
inti=0,op1,op2;
printf(“\nEnter the Postfix Expression : “);
scanf(“%s”,pofx);
 while( (ch=pofx[i++]) != ‘ ‘)
 {
  if(isdigit(ch)) push(ch-‘0’);
  else
  {        
   op2=pop();
   op1=pop();
   switch(ch)
   {
   case ‘+’:push(op1+op2);break;
   case ‘-‘:push(op1-op2);break;
   case ‘*’:push(op1*op2);break;
   case ‘/’:push(op1/op2);break;
   }
  }
 }


printf(“\n Given Postfix Expn: %s”,pofx);
printf(“\n Result after Evaluation: %d”,s[top]);
}
