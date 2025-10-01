#include<stdio.h>
void main(){
int n,i;
unsigned long long fact=1;
printf("enter number:\n");
scanf("%d",&n);
if(n<0)
{
    printf("Error!\n");
}
else
{
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d is %11u\n",n,fact);
}
getch();
}
