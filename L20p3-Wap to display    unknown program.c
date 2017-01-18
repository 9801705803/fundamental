/*
Student Name:Prabin Karki
Subject:Programming Fundamental
Labsheet No:19
Roll No:26
program:
Date:18 Janaury,2017
*/

#include<stdio.h>
void function(int num);
int main()
{
int num;
printf("Enter a number");
scanf("%d",&num);
function1(num);
return 0;
}
void function1(int num)
{
    int mul;
    mul=num*10;
    printf("The no is :%d",mul);
}
