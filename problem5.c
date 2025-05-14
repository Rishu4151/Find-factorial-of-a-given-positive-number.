#include <stdio.h>
unsigned long long factorial(int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1;
    } 
    else 
    {
        return n * factorial(n - 1);
    }
}
int main() 
{
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    unsigned long long result = factorial(number);
    printf("Factorial of %d = %llu\n", number, result);
    return 0;
}
