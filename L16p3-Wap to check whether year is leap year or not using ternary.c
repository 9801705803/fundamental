/*
Student Name:Prabin Karki
Subject:Programming Fundamental
Lab Sheet No:
Roll No:26
program:WAP to check whether year is leap year or not using ternary operator
Date:Janaury 9,2017
*/

#include<stdio.h>

  int main(){
  int year;
 printf("Enter a year:");
 scanf("%d",&year);
 (year%4==0 && year%100!=0)?printf("The year is leap year"):
 (year%400==0)?printf("The year is leap year"):printf("The year is not leap year");
 return 0;
}

