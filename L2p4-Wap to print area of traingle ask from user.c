/*
Student Name:Prabin Karki
Subject:Programming Fundamental
Roll No:
Lab sheet No:2
Program:WAP to print Area of traingle,base & height are asked from users
Date:November 16,2016
*/
#include<stdio.h>
#include<conio.h>
void main()
{
float b,h,area;
printf("Enter the base of traingle:\n");
scanf("%f",&b);
printf("Enter the height of traingle:\n");
scanf("%f",&h);
area=0.5*b*h;
printf("The area of traingle is: %f",area);
getch();
}
