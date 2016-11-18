/*
Student Name:Prabin Karki
Subject:Programming Fundamental
Roll No:
Lab sheet No:2
Program:Wap to print simple interest data asked from user
Date:18 Nov,2016
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 float p,t,r,i;
 printf("Enter your p:\n");
 scanf("%f",&p);
 printf("Enter your T:\n");
 scanf("%f",&t);
 printf("Enter your R:\n");
 scanf("%f",&r);
 i=p*t*r/100;
 printf("The simple interest is :%f",i);
 getch();
}
