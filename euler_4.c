/*The prime factors of 13195 are 5,7,13 and 29.
What is the largest prime factor of the number 600851475143*/

#include<stdio.h>

int main()
{
    int i, count, value = 0;
    long long int num = 600851475143;

    for (i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            count = 0;
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    count++;
                }
            }

            if (count == 2)
            {
                printf("%d is a prime factor\n", i);
                if (value < i)
                {
                    value = i;
                }

                // Divide the original number by the prime factor
                num = num / i;
            }
        }
    }

    printf("Largest prime factor is: %d\n", value);
    return 0;
}
