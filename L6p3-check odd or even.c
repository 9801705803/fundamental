/*
Student Name:Prabin Karki
Subject:Programming Fundamental
Roll No:
Lab sheet No:6
Program:WAP to check the number is odd or even
Date:November 25,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("Enter your number:\n");
scanf("%d",&n);
if (n%2==0)
{
printf("Number is even");
}
 else if (n%1==0)
 {
 printf("Number is odd");
 }
 getch();
 return 0;
}
