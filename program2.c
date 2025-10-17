#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if (a+b>c && a+c>b && b+c>a)
{  
    printf("the no can be a triangle.\n");
}
    else
    {
        printf("the no cannot be a triangle.\n");
    }

    
}