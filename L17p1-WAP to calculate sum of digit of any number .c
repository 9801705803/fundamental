/*
Student Name:Prabin karki
Subject:Programming fundamental
Lab sheet No:17
Roll No:26
program:WAP to calculate sum of digit of any number
Date:jan 13,2017
*/

#include<stdio.h>
int main(){

  int n,sum=0,z=0;
  printf("Enter your number:\n");
  scanf("%d",&n);
  while(n>0)
  {
    z=n%10;
    sum=sum+z;
    n=n/10;
  }
  printf("The sum of digits is %d",sum);
  getch();
  return 0;
}

