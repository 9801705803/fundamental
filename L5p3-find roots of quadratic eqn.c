/*
Student Name:Prabin Karki
Subject:Programming Fundamental
Roll No:11
Program:Wap to find roots of quadratic equation and value are assigned from user
Date:November 23,2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float a,b,c,x1,x2,dis;
printf("Enter the value of a:\n");
scanf("%f",&a);
printf("Enter the value of b:\n");
scanf("%f",&b);
printf("Enter the value of c:\n");
scanf("%f",&c);
dis=(b*b)-(4*a*c);
x1=(-b+pow(dis,0.5))/(2*a);
printf("The value of x1 is : %f",x1);
x2=(-b-pow(dis,0.5))/(2*a);
printf("The value of x2 is : %f",x2);
getch();
return 0;
}
