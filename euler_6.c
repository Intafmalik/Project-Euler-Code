 /*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?*/

#include <stdio.h>
int main()
{
    long long num = 1;
    int flag ;
    while (1)
    {
        flag=0;
        for (int i = 1; i <= 20; i++)
        {
            if (num % i == 0)
                flag++;
            else
            break;
        }
        num++;
        if(flag==20)
        break;

    }
    printf("%d",num-1);

}