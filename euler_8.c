
/*A Pythagorean triplet is a set of three natural numbers, a<b<c, for which, a^2+b^2=c^2
For example, 3^2+4^2=5^2
There exists exactly one Pythagorean triplet for which  a +b +c=1000. Find the product of abc.

*/


#include <stdio.h>

void findPythagoreanTriplet(int targetSum)
 {
    for (int a = 1; a < targetSum; a++) 
    {
        for (int b = a; b < targetSum - a; b++)
         {
            int c = targetSum - a - b;
            if (a * a + b * b == c * c) 
            {
                printf("The Pythagorean triplet is %d, %d, %d\n", a, b, c);
                printf("The product abc is %lld\n", (long long)a * b * c);
                return;
            }
        }
    }
    printf("No Pythagorean triplet found for the given target sum.\n");
}

int main() 
{
    int targetSum = 1000;
    findPythagoreanTriplet(targetSum);

    return 0;
}
