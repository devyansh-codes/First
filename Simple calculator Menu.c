#include<stdio.h>// without global varaible 
int sum(int a,int b)
{
    int sum=a+b;
    return sum;
}
int sub(int a,int b)
{
    int sub=a-b;
    return sub;
}
int multi(int a,int b)
{
    int multi=a*b;
    return multi;
}
int avg(int a,int b)
{
    int avg=a+b/2;
    return avg;
}
int demnum(int a,int b)
{
    int demnum=a/b;
    return demnum;
}
int demdom(int a,int b)
{
    int demdom=b/a;
    return demdom;
}
int main() 
{
    int a,b,c,r;
    printf("Enter two numbers to open calci \n Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("The inputted numbers are %d and %d \n",a,b);
    printf("Menu: \n 1.Additon \n 2.Substraction \n 3.Average \n 4.Multiplication \n 5.Divsion with numerator \n 6.Divison with denominator \n Input ur choice:");
    scanf("%d",&c);
    if (c==1)
    {
        r=sum(a,b);
        printf("Result : %d",r);
    }
    else if(c==2)
    {
        r=sub(a,b);
        printf("Result : %d",r);
    }
    else if (c==3)
    {
        r=avg(a,b);
        printf("Result : %d",r);
    }
    else if (c==4)
    {
        r=multi(a,b);
        printf("Result : %d",r);
    }
    else if (c==5)
    {
        r=demnum(a,b);
        printf("Result : %d",r);
    }
    else if  (c==6)
    {
        r=demdom(a,b);
        printf("Result : %d",r);
    }
    else
    {
        printf("error");
    }
}
