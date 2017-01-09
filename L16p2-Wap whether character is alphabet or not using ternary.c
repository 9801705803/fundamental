/*
Student Name:Prabin Karki
Subject:Programming Fundamental
Lab Sheet No:
Roll No:26
program:WAP to check whether a number is alphabets or not using ternary operator
Date:Janaury 9,2017
*/

#include<stdio.h>

int main(){ 
  char n;
  int ASCII; 
 printf("Enter the character:\n");
 scanf("%c",&n);
  ASCII=n;
  
  
  ((ASCII>=65 && ASCII<=90)||(ASCII>=97&&ASCII<=122))?printf("The character is alphabets"):printf("The character is not alphabets");
  
 
  return 0;
}
 
