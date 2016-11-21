/*
Student Name:prabin karki
Subject:Programming Fundamental
Roll No :
Lab sheet No:4
Program:Wap to print area of triangle
Date:November 21,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
float a,b,c,s,area;
printf("Enter the first side of the traingle:\n");
scanf("%f",&a);
printf("Enter the second side of the traingle:\n");
scanf("%f",&b);
printf("Enter the third side of the triangle:\n");
scanf("%f",&c);
s=a+b+c/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("The area of triangle is :%f",area,s);
getch();
return 0;
}
