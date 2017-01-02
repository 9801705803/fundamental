/*
Name:Prabin Karki
Subject:Programming fundamental
Lab sheet No=15
Roll No=26
program=WAP to print all natural number from 1 to n using while loop
Date=janaury 2,2017
*/

#include<stdio.h>

int main(){
int a=1,n;
printf("\n Enter any number:");
scanf("%d",&n);

while(a<=n)
{
printf(" %d ",a++);
}

return 0;
}
