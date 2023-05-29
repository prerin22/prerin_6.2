#include<stdio.h>
#include<conio.h>

void main(){
int i=1;
int a;
clrscr();

printf("enter any number:");
scanf("%d",&a);

do{
 if(i%2==0)
 printf("%d\n",i);
 i++;
 }
 while(i<=a);
  getch();

  }