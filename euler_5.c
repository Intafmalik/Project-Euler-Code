
/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is
9009 = 91 * 99 .Find the largest palindrome made from the product of two 3-digit numbers.*/

#include <stdio.h>

int ispalindrome(int pal)
{
    int num, rem, sum = 0;
    num = pal;

    while (pal != 0)
    {
        rem = pal % 10;
        sum = sum * 10 + rem;
        pal = pal / 10;
    }

    return num == sum; // Return true if it's a palindrome, false otherwise
}

int main()
{
    int largestPalindrome = 0;

    for (int i = 100; i <= 999; i++)
    {
        for (int j = 100; j <= 999; j++)
        {
            int product = i * j;
            if (ispalindrome(product) && product > largestPalindrome)
            {
                largestPalindrome = product;
            }
        }
    }

    printf("The largest palindrome made from the product of two 3-digit numbers is: %d\n", largestPalindrome);

    return 0;
}
