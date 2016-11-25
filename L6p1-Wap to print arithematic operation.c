/*
Student Name:prabin karki
Subject:Programming Fundamental
Roll No :11
Lab sheet No:6
Program:Wap to print arithmatic operation
Date:November 25,2016
*/
#include<stdio.h>
#include<conio.h>
 int main()
 {
 int a,b,sum,sub,mod,div,mul;
 printf("Enter the first number:\n");
 scanf("%d",&a);
 printf("Enter the second number:\n");
 scanf("%d",&b);
 sum=a+b;
 sub=a-b;
 mul=a*b;
 div=a/b;
 mod=a%b;
 printf("The sum of two number is : %d\n",sum);
 printf("The subtraction of two number is : %d\n",sub);
 printf("The multiplication of two number is :%d\n",mul);
 printf("The modulus of two number is : %d\n",mod);
 printf("The division of two number is : %d\n",div);
 getch();
 return 0;
 }
