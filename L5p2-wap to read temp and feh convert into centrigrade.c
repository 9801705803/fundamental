/*
Student Name:Prabin Karki
Subject:programming Fundamental
Roll No:11
Lab Sheet No:5
Program:Wap to find to read temperature and fehrenheit covert into centrigrade
Date:November 23,2016
*/

#include<stdio.h>
int main()
{
float C,F;
printf("Enter the current temperature in fahenhit:\n");
scanf("%f",&F);
C=0.556*(F-32);
printf("Enter the temperature in centrigrade: %f",C);
return 0;
}
