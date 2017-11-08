#include<iostream.h>
#include<stdio.h>
float fun(double h)
{
    return (int)((h+0.005)*100)/(float)100;
}
void main()
{
	float fun(double h);
    printf("%.2f  %.2f\n",fun(8.32433),fun(8.32533));
}