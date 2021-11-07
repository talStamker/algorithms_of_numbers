#include<stdio.h>
#include "NumClass.h"
int main(){
    int x,y;
    printf("put two numbers");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("the amstrong numbers:");
    for (int i = x; i <= y; i++)
    {
        if (isArmstrong(i)==1)
        {
            printf("%d,",i);
        }
        
    }
    printf("\n");
    printf("the prime numbers");
    for (int i = x; i <= y; i++)
    {
        if (isPrime(i)==1)
        {
            printf("%d,",i);
        }
        
    }
    printf("\n");
     printf("the palindrome numbers");
    for (int i = x; i <= y; i++)
    {
        if (isPalindrome(i)==1)
        {
            printf("%d,",i);
        }
        
    }
    printf("\n");
     printf("the strong numbers");
    for (int i = x; i <= y; i++)
    {
        if (isStrong(i)==1)
        {
            printf("%d,",i);
        }
        
    }
    printf("\n");

    return 0;
}