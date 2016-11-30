/*
Student Name:Prabin Karki
Subject:Programming fundamental
Roll NO:11
Lab sheet No:7
Program:Wap to use assignment operator
Date:November 30,2016
*/

#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b;
  printf("Enter your first number:\n");
  scanf("%d",&a);
  printf("Enter your second number:\n");
  scanf("%d",&b);
  a+=b;
  printf("Use of a+=b is : %d\n",a);
  a-=b;
  printf("Use of a-=b is : %d\n",a);
  a*=b;
  printf("Use of a*=b is : %d\n",a);
  a/=b;
  printf("Use of a/=b is : %d\n",a);
  getch();
  return 0;
}
