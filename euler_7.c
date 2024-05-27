#include <stdio.h>

int is_prime(int num)
 {
    if (num < 2) 
    {
        return 0; // False
    }
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) 
        {
            return 0; // False
        }
    }
    return 1; // True
}

int find_prime_num_at_position(int position)
 {
    int primes[position];
    int num = 2;
    int count = 0;

    while (count < position) 
    {
        if (is_prime(num))
         {
            primes[count] = num;
            count++;
        }
        num++;
    }

    return primes[position - 1];
}

int main() 
{
    int result = find_prime_num_at_position(10001);
    printf("The 10001 st prime number is: %d\n", result);

    return 0;
}
