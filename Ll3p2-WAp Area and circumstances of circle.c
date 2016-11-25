/*
Student Name :prabin karki
Subject: Programming Fundamental
Roll No:
Program : WAP to calculate Area and circumference of circle
Date: November 16,2016
*/
#include<stdio.h>
#include<conio.h>
void main()
{
float r,area,circumference;
printf("Enter the radius of circle:\n");
scanf("%f",&r);
area=3.14*r*r;
printf("Area of circle is: %f\n",area);
getch();
circumference=2*3.14*r;
printf("circumference of circle is: %f",circumference);
getch();
}
