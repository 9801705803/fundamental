/*
Student Name:Prabin Karki
Subject:Programming Fundamental
Roll No:
Lab sheet No:2
Program:Wap to print product&sum of three number,asked from user
Date:November 16,2016
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,sum,product;
printf("Enter first number:\n");
scanf("%d",&a);
printf("Enter second number:\n");
scanf("%d",&b);
printf("Enter third number :\n");
scanf("%d",&c);
sum=a+b+c;
printf("sum of three number is : %d\n",sum);
getch();
product=a*b*c;
printf("product of three number is : %d",product);
getch();
}
