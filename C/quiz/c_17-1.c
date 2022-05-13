/*
Write a function that prints the greatest common divisor (GCD) of your two input integers.
Use the following Euclidean algorithm to obtain the GCD.
*/

#include <stdio.h>

// Function to return gcd of a and b
int euclidean(int a, int b)
{
    if (a == 0)
        return b;
    return euclidean(b % a, a);
}
 
// Driver program to test above function
int main()
{
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    printf("The greatest common divisor of %d and %d is %d.", x, y, euclidean(x,y));
    return 0;
}