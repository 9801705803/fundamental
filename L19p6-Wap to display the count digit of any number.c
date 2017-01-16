/*
Student Name:Prabin Karki
Subject:Programming Fundamental
Lab sheet no:19
Roll No:26
Program:WAP to display the counts digits of any number
Date:janaury 16,2017
*/

#include<stdio.h>
#include<conio.h>
int main(){
 int num,count=0;
 printf("Enter the number:\n");
 scanf("%d",&num);
 while(num>0)
 {
    num=num/10;
    count++;
}
 printf("The total number of digits is %d\n",count);
getch();
return 0;
}
