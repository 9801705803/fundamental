/*
Student Name:prabin karki
Subject:Programming Fundamental
Roll No :11
Lab sheet No:4
Program:Wap to print area and perimeter of rectangle
Date:November 21,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
 float l,b,area,perimeter;
 printf("Enter the length of rectangle:\n");
 scanf("%f",&l);
 printf("Enter the breadth of rectangle:\n");
 scanf("%f",&b);
 area=l*b;
 printf("The area of rectangle is :%f",area);
 perimeter=2*(l+b);
 printf("The perimeter of rectangle is:%f",perimeter);
getch();
return 0;
}
