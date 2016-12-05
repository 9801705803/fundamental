/*
Student Name:Prabin karki
Subject:Programming Fundamental
Lab Sheet No:10
Roll No:
Program:Wap to use Relational operator
Date:5 December,2016
*/

#include<stdio.h>
#include<conio.h>
int main()
{
 float a;
 printf("Enter the number:\n");
 scanf("%f",&a);
 if (a>=60&&a<80)
 {
     printf("first Division");
 }
 if (a>=50&&a<60)
 {
     printf("Second Division");
 }
 if (a>=40&&a<50)
 {
     printf("Third Division");
 }
 if (a<40)
 {
    printf("Failed");
 }
  getch();
  return 0;
 }
