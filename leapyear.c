#include<stdio.h>
#include<conio.h>
void main()
{
int x;
if(x%4==0||x%100==0&&x%400==0)
printf("leap year");
else
printf("not a leap year");
getch();
}
