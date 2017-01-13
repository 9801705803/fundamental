/*
Student Name:Prabin karki
Subject:Programming fundamental
Lab sheet No:17
Roll No:26
program:WAP to calculate product of digit of any number
Date:jan 13,2017
*/

#include<stdio.h>
int main()
{
   int n,p,z;
   printf("Enter your number:\n");
   scanf("%d",&n);
   for(;n>0;n=n/20)
   {
    z=n%10;
    p=p*z;
   }
   printf("The product of digits is %d",p);
   getch();
   return 0;
}
