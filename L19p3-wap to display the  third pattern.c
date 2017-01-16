/*
Student Name:Prabin Karki
Subject:Programming Fundamental
Lab sheet no:19
Roll No:26
Program:WAP to display the following pattern
Date:janaury 16,2017
*/
#include<stdio.h>
int main()
{
  int n,i,j;
  printf("Enter the number :\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
{
  for(j=1;j<=i;j++)
  {
      printf("%d",i);
  }
     printf("\n");
  }
  getch();
  return 0;
}

