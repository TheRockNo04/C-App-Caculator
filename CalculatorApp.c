#include<stdio.h>
#include<conio.h>
void main()
{
    int no1,no2;
    char op;

    printf("enter num 1:- ");
    scanf("%d %c %d",&no1,&op,&no2);

    /*printf("enter Operator:- ");
    scanf("%s",&op);

    printf("enter num 2:- ");
    scanf("%d",&no2);*/
    
switch(op){
 case '-':
  printf("the answer is %d",no1-no2);
  break;

 case '+':
  printf("the answer is %d",no1+no2);
  break;

 case '*':
  printf("the answer is %d",no1*no2);
  break;

 case '/':
   printf("the answer is %d",no1/no2);
   break;

 default:
   printf("Something went wrong! Please enter the values again.");
}
getch();
}
