/*
Student Name:prabin karki
Subject:Programming Fundamental
Roll No:11
Lab sheet No:7
Program:WAP to calculate marks
Date:November 28,2016
*/

#include<stdio.h>
#include<conio.h>
int main()
{
  float a,b,c,d,e,f,g,sum,ave,per;
  printf("Enter your marks of computer Architecture :\n");
  scanf("%f",&a);
  printf("Enter your marks of programming fundamental :\n");
  scanf("%f",&b);
  printf("Enter your marks of Algebra :\n");
  scanf("%f",&c);
  printf("Enter your marks of Discreate structure :\n");
  scanf("%f",&d);
  printf("Enter your marks of software engineering :\n");
  scanf("%f",&e);
  printf("Enter your marks of organization management :\n");
  scanf("%f",&f);
  printf("Enter your marks of interactive skills :\n");
  scanf("%f",&g);
  sum=a+b+c+d+e+f+g;
  ave=(a+b+c+d+e+f+g)/7;
  per=(sum/700)*100;
  printf("Your total marks is :%f\n",sum);
  printf("your average marks is :%f\n",ave);
  printf("your percentage marks is :%f\n",per);
  getch();
  return 0;
}
