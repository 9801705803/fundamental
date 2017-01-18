/*
Student Name:Prabin Karki
Subject:Programming Fundamental
Labsheet No:19
Roll No:26
program:Wap to enter length and breadth and display area of rectangle using function
Date:18 Janaury,2017
*/

#include<stdio.h>
#include<conio.h>
void area();
int main()
{
    area();
    return 0;

}
void area()
{
 int l,b,a;
 printf("Enter the length");
 scanf("%d",&l);
 printf("Enter the breadth");
 scanf("%d",&b);
 a=l*b;
 printf("The area of rectangle is:%d",a);
 getch();
}

