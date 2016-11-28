/*
Student Name:Prabin Karki
Subject:Programming fundamental
Roll No:11
Lab sheet no:7
program:Write a c program to enter any number and calculate
Date:November 28,2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 int n,square;
 printf("Enter your number:\n");
 scanf("%d",&n);
 square=pow(n,2);
 printf("The square number is :%d",square);
 getch();
 return 0;
}
