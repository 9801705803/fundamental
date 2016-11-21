/*
Student Name:prabin karki
Subject:Programming Fundamental
Roll No :11
Lab sheet No:4
Program:Wap to print area and volume of sphere
Date:November 21,2016
*/
#include<stdio.h>
#include<conio.h>
#define pi 3.14
#include<math.h>
int main()
{
 float r,area,volume;
 printf("Enter the radius of sphere:\n");
 scanf("%f",&r);
 area=4*pi*pow(r,2);
 printf("The area of the sphere is :%f\n",area);
 volume=1.33*pi*pow(r,3);
 printf("The volume of sphere is :%f",volume);
 getch();
 return 0;
}
