#include<stdio.h> //global variable and switch case
int result;
int sum(int a,int b)
{
    result=a+b;
    printf("Result : %d",result);
}
int sub(int a,int b)
{
    result=a-b;
    printf("Result : %d",result);
}
int multi(int a,int b)
{
    result=a*b;
    printf("Result : %d",result);
}
int avg(int a,int b)
{
    result=a+b/2;
    printf("Result : %d",result);
}
int demnum(int a,int b)
{
    result=a/b;
    printf("Result : %d",result);
}
int demdom(int a,int b)
{
    result=b/a;
    printf("Result : %d",result);
}
int main() 
{
    int a,b,c;
    printf("Enter two numbers to open calci \n Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("The inputted numbers are %d and %d \n",a,b);
    printf("Menu: \n 1.Additon \n 2.Substraction \n 3.Average \n 4.Multiplication \n 5.Divsion with numerator \n 6.Divison with denominator \n Input ur choice:");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        sum(a,b);
        break;
    case 2:
        sub(a,b);
        break;
    case 3:
        multi(a,b);
        break;
    case 4:
        avg(a,b);
        break;
    case 5:
        demnum(a,b);
        break;
    case 6:
        demdom(a,b);
        break;
    default:
    printf("error");
}
}
