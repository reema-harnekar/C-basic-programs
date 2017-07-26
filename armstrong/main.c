#include <stdio.h>
#include <stdlib.h>

void main()
{
 int no, rem,temp,revno=0;
 printf("Enter the number to be checked\n ");
 scanf("%d",&no);
 temp=no;
 while(temp!=0)
 {
     rem=temp%10;
     revno+=rem*rem*rem;
     temp=temp/10;
 }
 if(revno==no)
    printf("%d is armstrong number\n",no);
 else
    printf("%d is not armstrong number\n",no);
}
