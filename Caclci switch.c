#include <stdio.h>
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
switch(c){
case 1:
printf("Addition= %d",a+b);
break;
case 2:
printf("Substraction= %d",a-b);
break;
case 3:
printf("Average= %d",a+b/2);
break;
case 4:
printf("Multiplication= %d",a*b);
break;
case 5:
printf("Divison with numerator= %d",a/b);
break;
case 6:
printf("Divison with denominator= %d",b/a);
break;
deafult:
printf("Error");
}
}
