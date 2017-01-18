/*
Student Name:Prabin Karki
Subject:Programming Fundamental
Labsheet No:19
Roll No:26
Date:18 Janaury,2017
*/

#include<stdio.h>
 void cube();
 int main()
{
 cube();
 getch();
 return 0;
}

 void cube()
 {
 int n,result;
 printf("Enter any number");
 scanf("%d",&n);
 result=n*n*n;
 printf("cube of the value is: %d",result);
 getch();
 return 0;
 }
