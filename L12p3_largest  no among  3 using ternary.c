/*
student Name:Prabin karki
Subject:Programming fundamental
Roll No:22
Lab sheet N0:10
program:wap to find two largest number using ternary
Date:7 december,2016
*/

#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,c;
 printf("Enter the first number:");
 scanf("%d",&a);
 printf("Enter the second number:");
 scanf("%d",&b);
 printf("Enter the third number:");
 scanf("%d",&c);
(a>=b&&a>=c)?printf("%d is the largest number",a):
(b>=c&b>=a)?printf("%d is the largest",b):
printf("%d is the largest number",c);
 getch();
 return 0;
}
