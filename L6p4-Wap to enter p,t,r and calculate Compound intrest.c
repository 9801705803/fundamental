/*
Student Name:Prabin Karki
Subject:Programming Fundamental
Roll No:11
Lab sheet No:6
Program:WAP to c program to enter p,t,r and calculate compound intrest
Date:November 25,2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 float p,t,r,ci;
 printf("Enter your principal:\n");
 scanf("%f",&p);
 printf("Enter your time:\n");
 scanf("%f",&t);
 printf("Enter your rate:\n");
 scanf("%f",&r);
 ci=(p*pow((1+r/100),t)-1);
 printf("The Compound Interest is : %f",ci);
 getch();
 return 0;
}
