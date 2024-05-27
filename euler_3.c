#include<stdio.h>
#include<math.h>

int main()
{
    int sum1 = 0, sum2 = 0, x;

    for(int i = 1; i <= 100; i++)
    {
        sum1 += i;
        sum2 += pow(i, 2);
        printf(" %d ", sum1);
        printf(" %d ", sum2);
    }
    
    printf("\nsum of 10 natural numbers is: %d\n", sum1);
    printf("Sum of 10 square natural numbers is: %d\n", sum2);
    
    // x = pow(sum1, 2);
    printf("The square of the sum of 10 natural numbers is: %d\n", sum1 * sum1);
    
    printf("The difference between the sum of the squares and the square of the sum is = %d\n", sum1 * sum1 - sum2);

    return 0;
}
