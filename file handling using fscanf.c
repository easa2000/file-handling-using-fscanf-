//using fscanf
#include<stdio.h>
void main()
{
    FILE *fp;
    char name[20];
    int age;
    int roll_no;
    fp = fopen("Mahudoom.txt","r");
    if(fp == NULL)
    {
        printf("\n file cannot open.");
    }else{
        fscanf(fp,"%s %d %d",name ,&age ,&roll_no);
        printf("\n %s %d %d",name ,age,roll_no);
    }
}
