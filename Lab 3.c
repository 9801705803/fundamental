/*
Student Name :prabin karki
Subject: Programming Fundamental
Roll No:
Program : WAP to calculate Area and circumference of circle
Date: November 16,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14
void main()
{
float r,area,circumference;
printf("Enter the radius of circle:\n");
scanf("%f",&r);
area=pi*pow(r,2);
printf("Area of circle is: %f\n",area);
circumference=2*pi*r;
printf("circumference of circle is: %f",circumference);
getch();
}
