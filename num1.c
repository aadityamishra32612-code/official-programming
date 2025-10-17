#include<stdio.h>
int main()
{
    int n, m, num1 = 0, num2 = 0, num3;
    printf("enter n and m: ");
    scanf("%d%d ,&n, &m");

    for(int i = 1; i <= n; i++)
    {
        if(i % m !=0)
        {
            
            num1 += i;
            
            
        }
    }
    for(int i = 1; i <= n; i++)
    {
        if(i % n == 0)
        {
            num2 += i;
        }
    }
    num3 = num1 -num2;

    printf("num1 = %d\n" , num1);
    printf("num2 = %d\n" , num2);
    printf("num3 = %d\n" , num3);
    return 0;
}

