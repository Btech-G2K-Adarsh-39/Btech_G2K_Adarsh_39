#include<stdio.h>
int main()
{
    int i,num,sum_even = 0,sum_odd = 0;
    printf("Enter a number = ");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        if (i % 2 == 0){
        sum_even = sum_even + i;

    }

    else {
        sum_odd = sum_odd + i;
    }
}
    printf("Sum of even number = %d\n",sum_even);
    printf("Sum of odd number = %d",sum_odd);
         return 0;
}